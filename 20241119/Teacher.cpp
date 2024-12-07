#include "Teacher.h"

Teacher::Teacher(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthDate, const string& teacherId, Depertment depertment, ClassName, const vector<Course>& courses) : Person(id, lastName, firstName, gender, birthDate), teacherId(teacherId), depertment(depertment), className(className), courses(courses)
{
}