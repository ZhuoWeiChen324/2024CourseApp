#pragma once

#include "Person.h"

#include "Utility1.h"

#include "Course.h"

#include <string>

#include <vector>
using namespace std;

class Teacher : public Person
{
private:
	string teacherId; //教師編號
	Depertment depertment; //教師所屬系別
	ClassName className; //教師所授班級
	vector<Course> courses; //教師所授課程

public:
	Teacher(const string& id, const string& lastName, const string& firstName, const string& genderName, const string& birthDate, const string& teacherId, Depertment depertment, ClassName, const vector<Course>& courses);
	

};

