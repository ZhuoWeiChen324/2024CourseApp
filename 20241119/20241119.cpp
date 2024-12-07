#include <string>

#include <iostream>

//#include "Person.h"

#include "Student.h"

#include "Teacher.h"

#include "Course.h"

#include "Utility1.h"

using namespace std;

int main()
{
	Person person1("A123456789", "Chen", "Jason", "M", "1999-01-01");

	/*Person* person2 = new Person();
	person2->setId("B987654321");
	person2->setLasterName ("Wang");
	person2->setFirstName ("David");
	person2->setGenderName ("M");
	person2->setBirthData ("1999-12-31");

	person1.display();
	cout << endl;
	person2->display();*/

	Student student1("A123456789", "陳", "小明", "男", "1999-01-01", "S001", Depertment::ComputerSciece, ClassName::_1A);
	student1.display();

	cout << endl;

	Course course1("C001", "C++ Programming", "這門課程教授C++程式語言");
	Course course2("C002", "Java Programming", "這門課程教授Java程式語言");
	Course course3("C003", "Python Programming", "這門課程教授Python程式語言");
	//course1.display();
	//course2.display();
	//course3.display();

	Teacher teacher1("t123456789", "陳", "小明", "男", "1999-01-01", "T001", Depertment::ComputerSciece, ClassName::_1A, { course1, course2, course3 });
}