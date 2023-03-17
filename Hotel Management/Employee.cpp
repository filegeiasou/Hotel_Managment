#include "Employee.h"

Employee::Employee(string name, int age, string hotelJob, float salary)
{
	this->name = name;
	this->age = age;
	this->hotelJob = hotelJob;
	this->salary = salary;
}

Employee::Employee()
{

}

Employee::~Employee()
{
	cout << "Employee fired!!" << endl;
}

ostream& operator << (ostream& out, const Employee& a)
{
	cout << "Employee Name : " << a.name << endl;
	cout << "Employee Age : " << a.age << endl;
	cout << "Employee Job : " << a.hotelJob << endl;
	return out;
}
