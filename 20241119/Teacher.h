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
	Depertment department; //教師所屬系所
	ClassName className; //教師所授班級
	vector<Course> teachingCourses; //教師所授課程

public:
	Teacher(const string& id, const string& lastName, const string& firstName, const string& gander, const string& birthData, const string& teacherId, Depertment department, ClassName className, const vector<Course>& courses);

	//getter
	string getTeacherId() const;
	Depertment getDepartment() const;
	ClassName getClassName() const;
	vector<Course> getCourses() const;

	//setter
	void setTeacherId(const string& teacherId);
	void setDepartment(Depertment department);
	void setClassName(ClassName className);
	void setCourses(const vector<Course>& courses);

	void display() const;
};

