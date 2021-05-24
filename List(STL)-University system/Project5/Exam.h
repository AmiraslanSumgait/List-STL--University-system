#pragma once
#include "Lesson.h"
class Exam {
	int thisId;
	static int ID;
	Lesson* _lesson;
	double _point;
public:
	Exam() : thisId(), _lesson(), _point() {}
	Exam(Lesson* lesson, const double point)
	{
		thisId = ++ID;
		_lesson = lesson;
		_point = point;
	}
	void showExamInfo() {
		cout << "Exam id: " << thisId << endl;
		cout << "Lesson Name: " << _lesson->getName() << endl;
		cout << "Point: " << _point << endl;
		
	}
};
int Exam::ID = 0;

