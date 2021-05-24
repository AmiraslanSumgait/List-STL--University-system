#pragma once
#pragma once
#include "Student.h"

class Group {
	int _id;
	static int ID;
	string _name;
	list<Student> _students;
	list<Lesson> _lessons;
public:
	Group() :_id(), _name(), _students(), _lessons() {}
	Group(const string& name)
	{
		_id = ++ID;
		_name = name;
	}

	void addStudent(Student& student) {
		_students.push_back(student);
	}

	void addLesson(Lesson& lesson) {
		_lessons.push_back(lesson);
	}

	void showGroupInfo() {
		cout << "******Group name: " << _name << endl;
		cout << "Group id: " << _id << endl;
		cout << "Group students name: " << endl;
		for (auto i : _students)
		{
			cout << i.GetName() << endl;
		}
		cout << "Group lessons name: " << endl;
		for (auto i : _lessons)
		{
			cout << i.getName() << endl;
		}
		
	}
};

int Group::ID = 0;