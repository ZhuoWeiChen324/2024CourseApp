#pragma once
#include <string>
using namespace std;

class Person
{
private:
	string id;
	string lastName;
	string firstName;
	string gender;
	string birthData;

public:
	// Constructor,�@�غc�l�A�غc�禡
	Person(const string& id, const string& lastName, const string& firstName, const string& gender, const string& birthData);

	Person();
	display();

	//Getter,���Ȩ��
	string getId() const;
	string getLastName() const;
	string getFirstName() const;
	string getGender() const;
	string getBirthData() const;

	//Setter,�]�Ȩ��
	void setId(const string& id);
	void setLasterName(const string& lasterName);
	void setFirstName(const string& firstName);
	void setGenderName(const string& gender);
	void setBirthData(const string& birthData); 

};

