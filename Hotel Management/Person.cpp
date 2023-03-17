#include "Person.h"
Person::Person()
{

}

Person::~Person()
{

}

Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
}

ostream  & operator << (ostream& out, const Person& b)
{
	cout << "Person Name : " << b.name << endl;
	return out;
}