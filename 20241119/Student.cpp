#include "Student.h"
#include <iostream>

Student::Student(const string& id, const string& lastName, const string& firstName, const string& gander, const string& birthData, const string& studentid, Depertment depertment, ClassName className)
{
}

string Student::getStudentId() const
{
	return string();
}

Depertment Student::getDepartment() const
{
	return Depertment();
}

ClassName Student::getClassName() const
{
	return ClassName();
}

void Student::setStudentId(const string& studentId)
{
	this->studentId = studentId;
}

void Student::setDepartment(const Depertment department)
{
	this->department = department;
}


void Student::setClassName(const ClassName className)
{
	this->className = className;
}

void Student::display() const
{
	Person::display();
	cout << "學號: " << studentId << endl;
	cout << "科系: " << Utility1::toString(department) << endl;
	cout << "班級: " << Utility1::toString(className) << endl;
}
