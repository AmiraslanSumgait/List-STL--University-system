#pragma once
#pragma once
#include "Teacher.h"
class University {
private:
	list<Teacher> _teachers;
	list<Student> _students;
	int thisId;
	static int ID;
	string _name;
public:
	University() :thisId(), _name() {}
	University(const string& name)
	{
		thisId = ++ID;
		_name = name;
	}
	void addStudent(Student& student) {
		_students.push_back(student);
	}
	void addTeacher(Teacher& teacher) {
		_teachers.push_back(teacher);
	}
	int GetAvaregeScore() {
		double totalScore = 0;
		for (auto i : _students)
		{
			totalScore += i.GetScore();
		}
		return totalScore / _students.size();
	}
	void showAllStudents() {
		for (auto i : _students)
		{
			i.studentInfo();
		}
	}

	void showAllTeachers() {
		for (auto i : _teachers)
		{
			i.teacherInfo();
		}
	}

	double GetPayment() const {
		double payTotal = 0;
		for (auto& i : _students)
		{
			payTotal += i.GetMoney();
		}

		for (auto i : _teachers)
		{
			payTotal += i.GetSalary();
		}
		return payTotal;
	}
	void showUniversityInfo() {
		cout << "*******University Info********" << endl;
		cout << "University id: " << thisId << endl;
		cout << "University name: " << _name << endl;
		cout << "University average score: " << GetAvaregeScore() << endl;
	}
};

int University::ID = 0;