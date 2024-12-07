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
	vector<Course> teachingCourses; //�Юv�ұ½ҵ{

public:
	Teacher(const string& id, const string& lastName, const string& firstName, const string& genderName, const string& birthDate, const string& teacherId, Depertment depertment, ClassName, const vector<Course>& courses);
	
	//getter ���Ⱦ�
	string getTeacherId() const;
	Depertment getDepertment() const;
	ClassName getClassName() const;
	vector<Course> getCourses() const;

	//setter �]�w��
	void setTeacherId(const string& teacherId);
	void setDepertment(Depertment depertment);
	void setClassName(ClassName className);
	void setCourses(const vector<Course>& courses);

	void display() const;
};

