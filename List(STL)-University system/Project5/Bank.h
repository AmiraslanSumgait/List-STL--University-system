#pragma once
#include "University.h"
#include "Bankcard.h"
#include<list>
class Bank {
	int thisId;
	static int ID;
	string _name;
	list<BankCard> _bankCards;
public:
	Bank() :thisId(), _bankCards() {}
	Bank(const string& name)
	{
		_name = name;
		thisId = ++ID;
	}

	BankCard& getBankCard(const int& cardNumber) {
		for (auto i : _bankCards)
		{
			if (cardNumber == i.GetCardNumber()) return i;
		}
	}

	void addBankCard(BankCard& bankCard) {
		_bankCards.push_back(bankCard);
	}

	void showBankInfo() {
		cout << "Bank id: " << thisId << endl;
		cout << "Bank name: " << _name << endl << endl;
		for (auto& i : _bankCards)
		{
			i.showBankCardInfo();
		}
	}
};

int Bank::ID = 0;