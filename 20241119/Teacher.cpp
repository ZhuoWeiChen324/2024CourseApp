#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate, const string& teacherId, Depertment depertment, ClassName, const vector<Course>& courses) : Person(id, lastName, firstName, gender, birthDate), teacherId(teacherId), depertment(depertment), className(className), teachingCourses(courses)
{
}

string Teacher::getTeacherId() const
{
	return teacherId;
}

Depertment Teacher::getDepertment() const
{
	return depertment;
}

ClassName Teacher::getClassName() const
{
	return className;
}

vector<Course> Teacher::getCourses() const
{
	return teachingCourses;
}

void Teacher::setTeacherId(const string& teacherId)
{
	this->teacherId = teacherId;
}

void Teacher::setDepertment(Depertment depertment)
{
	this->depertment = depertment;
}

void Teacher::setClassName(ClassName className)
{
	this->className = className;
}

void Teacher::setCourses(const vector<Course>& courses)
{
	this->teachingCourses = courses;
}

void Teacher::display() const
{
	Person::display();
	cout << "教師編號: " << teacherId << endl;
	cout << "教師所屬系別: " << Utility1::toString (depertment) << endl;
	cout << "教師所授班級: " << Utility1::toString (className) << endl;
	cout << "教師所授課程: " << endl;
	for (const Course& course : teachingCourses)
	{
		course.display();
	}
}
