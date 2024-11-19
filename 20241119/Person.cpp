#include "Person.h"

#include <string>
using namespace std;


/*Person::Person(const string& id, const string& lastName, const string& firstName, const  string& gender, const string& birthData)
{
	this->id = id;
	this->lastName = lastName;
	this->firstName = firstName;
	this->gender = gender;
	this->birthData = birthData;
}*/

Person::Person(const string& id, const string& lastName, const string& firstName, const  string& gender, const 
	string& birthData) : id(id), lastName(lastName), firstName(firstName), gender(gender), birthData(birthData)
{
}

Person::Person()
{
}

string Person::getId() const
{
	return string();
}

string Person::getLastName() const
{
	return string();
}

string Person::getFirstName() const
{
	return string();
}

string Person::getGender() const
{
	return string();
}

string Person::getBirthData() const
{
	return string();
}



void Person::setId(const string& id)
{
	this->lastName = lastName;
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


