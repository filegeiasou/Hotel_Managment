#pragma once
#include "Hotel.h"
class Hostel:public Hotel
{
	protected:
		int numberToRoom;
	public:
		Hostel();
		Hostel(int , string , int);
		~Hostel();
};

