#pragma once

#include "Person.h"

#include "Utility1.h"

class Student :
    public Person
{
private:
    string studentId;
    Department department;
    ClassName className;

public:
    Student(const string& id, const string& lastName, const string& firstName, const string& gander, const string& birthData, const string& studentid, Department depertment, ClassName className);

    string getStudentId() const;
    Departmant getDepartment() const;
    ClassName getClassName() const;
};


