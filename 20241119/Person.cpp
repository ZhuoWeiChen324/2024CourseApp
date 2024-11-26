#include "Person.h"
#include <string>
#include <iostream>
using namespace std;


/*Person::Person(const string& id, const string& lastName, const string& firstName, const  string& gender, const string& birthData)
{
	this->id = id;
	this->lastName = lastName;
	this->firstName = firstName;
	this->gender = gender;
	this->birthData = birthData;
}*/

Person::Person(const string& id, const string& lastName, const string& firstName, const  string& gender, const string& birthData) : id(id), lastName(lastName), firstName(firstName), gender(gender), birthData(birthData)
{
}

Person::Person()
{
}

string Person::getId() const
{
	return id;
}

string Person::getLastName() const
{
	return lastName;
}

string Person::getFirstName() const
{
	return firstName;
}

string Person::getGender() const
{
	return gender;
}

string Person::getBirthData() const
{
	return birthData;
}

void Person::setId(const string& id)
{
	this -> id = id;
}

void Person::setLasterName(const string& lasterName)
{
	this->lastName = lasterName;
}

void Person::setFirstName(const string& firstName)
{
	this->firstName = firstName;
}

void Person::setGenderName(const string& gender)
{
	this->gender = gender;
}

void Person::setBirthData(const string& birthData)
{
	this->birthData = birthData;
}

void Person::display() const
{
	cout << "ID: " << id << endl;
	cout << "姓: " << lastName << endl;
	cout << "名: " << firstName << endl;
	cout << "性別: " << gender << endl;
	cout << "生日: " << birthData << endl;
}


