#pragma once
#include<list>
#include "Person.h"
#include "Bankcard.h"
#include "Exam.h"

class Student :public Person {
	int _id;
	static int ID;
	string _speciality;
	double _score;
	double _money;
	BankCard* _bankCard;
	list<Exam> _exams;

public:
	Student() :_id(), _speciality(), _score(), _money(), _bankCard(), _exams() {}
	Student(const string& name, const string& surname, const string& speciality, const double score, const double money, BankCard* bankCard) :Person(name, surname)
	{
		_id = ++ID;
		_speciality = speciality;
		_score = score;
		_money = money;
		_bankCard = bankCard;
	}

	string GetName()const {
		return _name;
	}

	double GetScore()const {
		return _score;
	}

	double GetMoney()const {
		return _money;
	}

	void addExam(Lesson* lesson, const double point) {
		_exams.push_back(Exam(lesson, point));
	}

	void studentInfo() {
		cout << "****** Student " << _id << " about *********" << endl;
		cout << "Name: " << _name << endl;
		cout << "Surname: " << _surname << endl;
		cout << "Speciality: " << _speciality << endl;
		cout << "Score: " << _score << endl;
		cout << "Money: " << _money << endl;
	}

	void showBalance() {
		int password;
		cout << _name << " " << _surname << endl;
		cout << "Enter password: ";
		cin >> password;
		if (password == _bankCard->GetPassword())
		{
			cout << "Balance: " << _bankCard->GetBalance() << endl;
		}
		else cout << "Password is incorrect" << endl;
	
	}
};

int Student::ID = 0;