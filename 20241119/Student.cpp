#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(const string& id, const string& lastName, const string& firstName, const string& gander, const string& birthData, const string& studentid, Depertment depertment, ClassName className) : Person(id, lastName, firstName, gander, birthData), studentId(studentid), department(depertment), className(className)
{
}

string Student::getStudentId() const
{
	return studentId;
}

Depertment Student::getDepartment() const
{
	return department;
}

ClassName Student::getClassName() const
{
	return className;
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
