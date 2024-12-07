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
	string teacherId; //�Юv�s��
	Depertment depertment; //�Юv���ݨt�O
	ClassName className; //�Юv�ұ¯Z��
	vector<Course> courses; //�Юv�ұ½ҵ{

public:
	Teacher(const string& id, const string& lastName, const string& firstName, const string& genderName, const string& birthDate, const string& teacherId, Depertment depertment, ClassName, const vector<Course>& courses);
	

};

