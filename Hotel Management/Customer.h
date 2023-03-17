#pragma once
#include "Person.h"
class Customer:public Person
{
	private:
		string time_a;
		string time_d;
		string tel;
	public:
		Customer(string,int,string, string, string);
		~Customer();
		friend ostream& operator << (ostream&, const Customer&);
};

