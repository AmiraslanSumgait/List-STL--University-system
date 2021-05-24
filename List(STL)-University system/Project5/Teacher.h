#pragma once
#include "Group.h"
#include "Bankcard.h"
#include "Person.h"


class Teacher :public Person {
	int thisId;
	static int ID;
	double _age;
	list<Group> _groups;
	string _department;
	double _salary;
	BankCard* _bankCard;
public:
	Teacher() :thisId(), _age(), _groups(), _department(), _salary(), _bankCard() {}
	Teacher(const string& name, const string& surname, const double age, const string& department, const double salary, BankCard* bankCard) :Person(name, surname)
	{
		thisId = ++ID;
		_age = age;
		_department = department;
		_salary = salary;
		_bankCard = bankCard;
	}

	double GetSalary()const {
		return _salary;
	}

	void AddGroup(const string& name) {
		_groups.push_back(Group(name));
	}

	void teacherInfo() {
		cout << "- - - - - - - Teacher " << thisId << " info - - - - - - -" << endl;
		cout << "Teacher name: " << _name << endl;
		cout << "Teacher surname: " << _surname << endl;
		cout << "Teacher age: " << _age << endl;
		cout << "Teacher department: " << _department << endl;
		cout << "Teacher salary: " << _salary << endl << endl;
	}

	void showBalance() {
		size_t password;
		cout << "\t\t" << _name << " " << _surname << endl;
		cout << "Enter password: ";
		cin >> password;
		if (password == _bankCard->GetPassword())
		{
			cout << "Balance: " << _bankCard->GetBalance() << endl;
		}
		
	}
};

int Teacher::ID = 0;