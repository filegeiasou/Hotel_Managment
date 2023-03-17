#include "Hotel.h"
Hotel::Hotel(int numRooms, string hotelName)
{
	this->numRooms = numRooms;
	this->hotelName = hotelName;
}

Hotel::~Hotel()
{
	cout << "Hotel says bye bye" << endl;
}

ostream& operator << (ostream & out, const Hotel & c)
{
	out << "Hotel name : " << c.hotelName << endl;
	return out;
}

Hotel::Hotel()
{

}

void Hotel :: operator += (Employee* x)
{
	employees.push_back(x);
}

void Hotel::printEmployees(ostream& out)
{
	for (int i = 0; i < employees.size();i++)
	{
		out << *employees[i] << endl;
	}
}

void Hotel::getRoom(Customer * x)
{
	if (numRooms > 0)
	{
		numRooms--;
		persons.push_back(x);
	}
	else
	{
		cout << "The Hotel is Full" << endl;
	}
}

void Hotel::leaveRoom()
{
	numRooms++;
	persons.pop_back();
	cout << "One room is free again" << endl;
}

void Hotel::setNumRooms(int numRooms)
{
	this->numRooms = numRooms;
}

int Hotel::getNumRooms()
{
	return this->numRooms;
}

void Hotel::printCustomers(ostream & out )
{
	for (int i = 0; i < persons.size();i++)
	{
		out << *persons[i] ;
	}
}