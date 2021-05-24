#pragma once
#include<iostream>
using namespace std;
class Lesson {
	int thisId;
	static int ID;
	string _name;
public:
	Lesson() :thisId(), _name() {}
	Lesson(const string& name) :_name(name), thisId(ID+1) {}
	string getName()const {
		return _name;
	}
	void showLessonInfo() {
		cout << "Name: " << _name << endl;
		cout << "Lesson id: " << thisId << endl;
	}
};
int Lesson::ID = 0;