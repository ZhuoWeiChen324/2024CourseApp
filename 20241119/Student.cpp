#include "Student.h"
#include <iostream>

Student::Student(const string& id, const string& lastName, const string& firstName, const string& gander, const string& birthData, const string& studentid, Department depertment, ClassName className)
{
}

string Student::getStudentId() const
{
	return string();
}

Departmant Student::getDepartment() const
{
	return departmant();
}

ClassName Student::getClassName() const
{
	return ClassName();
}

void Student::setStudentId(const string& studentId)
{
	this->studentId = studentId;
}

void Student::setDepartment(const Department department)
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
	cout << "�Ǹ�: " << studentId << endl;
	cout << "��t: " << Utility::toString(department) << endl;
	cout << "�Z��: " << Utility::toString(className) << endl;
}
