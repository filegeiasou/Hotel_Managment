#pragma once
#include "Employee.h"

class Hotel
{
	protected:
		int numRooms;
		string hotelName;
		vector <Employee* > employees;
		vector <Person* > persons;
	public:
		Hotel(int , string);
		Hotel();
		~Hotel();
		friend ostream& operator << (ostream & , const Hotel & );
		void operator +=(Employee*);
		void printEmployees(ostream&);
		void printCustomers(ostream&);
		void getRoom(Person *);
		void leaveRoom();
		void setNumRooms(int);
		int getNumRooms();
};

