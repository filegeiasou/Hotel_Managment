#include "Customer.h"
Customer::Customer(string name , int age , string time_a, string time_d, string tel)
{
	this->name = name;
	this->age = age;
	this->time_a = time_a;
	this->time_d = time_d;
	this->tel = tel;
}

Customer::~Customer()
{
	cout << "Customer says Byeeee" << endl;
}

ostream& operator << (ostream& out, const Customer& d)
{
	out << "Name : " << d.name << endl;
	out << "Age :" << d.age << endl;
	out << "Time arraival : " << d.time_a << endl;
	out << "Time withdrawal : " << d.time_d << endl;
	out << "Telephone : " << d.tel << endl;
	out << "----------------" << endl;
	return out;
}