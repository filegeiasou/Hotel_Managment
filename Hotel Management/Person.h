#pragma once
#include <string.h>
#include <cstring>
#include <iostream>
#include <vector>
#include <fstream>
#include <list>
using namespace std;

class Person
{
	protected:
		string name;
		int age;
	public:
		Person();
		~Person();
		Person(string, int);
		friend ostream& operator << (ostream&, const Person&);
};

