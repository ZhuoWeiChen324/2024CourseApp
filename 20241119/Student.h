#pragma once
#include "Person.h"
#include "Utility1.h"

class Student :
    public Person
{
private:
    string studentId;
	Depertment department;
    ClassName className;

public:
    Student(const string& id, const string& lastName, const string& firstName, const string& gander, const string& birthData, const string& studentid, Depertment depertment, ClassName className);

    //Grtter,取值函數
    string getStudentId() const;
    Depertment getDepartment() const;
    ClassName getClassName() const;

	//Setter,設值函數
    void setStudentId(const string& studentId);
    void setDepartment(const Depertment department);
    void setClassName(const ClassName className);

	void display() const;
};


