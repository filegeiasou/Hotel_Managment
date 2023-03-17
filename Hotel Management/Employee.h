#pragma once
#include "Person.h"
#include "Customer.h"
class Employee:public Person
{
	private:
		string hotelJob;
		float salary;
	public:
		Employee(string, int, string, float);
		Employee();
		~Employee();
		friend ostream& operator << (ostream&, const Employee&);

};

