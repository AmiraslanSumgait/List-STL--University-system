#pragma once
#include <iostream>
using namespace std;

class BankCard {
	int thisId;
	static int ID;
	size_t _cardNumber;
	int _password;
	double _balance;
	int _expired_month;
	int _expired_year;
public:
	BankCard() :thisId(), _cardNumber(), _password(), _balance(), _expired_month(), _expired_year() {}
	BankCard(const size_t& cardNumber, const int& password, const double& balance, const int& expired_month, const int& expired_year)
	{
		thisId = ++ID;
		_cardNumber = cardNumber;
		_password = password;
		_balance = balance;
		_expired_month = expired_month;
		_expired_year = expired_year;
	}

	double GetBalance()const
	{
		return _balance;
	}

	int GetId()const {
		return thisId;
	}

	int GetPassword()const {
		return _password;
	}

	size_t GetCardNumber()const {
		return _cardNumber;
	}

	void showBankCardInfo() {
		cout << "********* Bank card " << thisId << " info ************" << endl;
		cout << "Card number: " << _cardNumber << endl;
		cout << "Card password: " << _password << endl;
		cout << "Balance: " << _balance << endl;
		cout << "Expiration date: " << _expired_month << "/" << _expired_year <<  endl;
	}
};

int BankCard::ID = 0;