﻿#include <iostream>

#include "Person.h"
using namespace std;

int main()
{
	Person person1("A123456789", "Chen", "Jason", "M", "1999-01-01");

	Person* person2 = new Person();
	person2->setId("B987654321");
	person2->setLasterName ("Wang");
	person2->setFirstName ("David");
	person2->setGenderName ("M");
	person2->setBirthData ("1999-12-31");

	person1.display();
	cout << endl;
	person2->display();
}