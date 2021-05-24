#pragma once
#include <iostream>
using namespace std;
class Person {
protected:
	string _name;
	string _surname;
public:
	Person() :_name(), _surname()
	{

	}
	Person(const string& name, const string& surname) :_name(name), _surname(surname)
	{

	}
};