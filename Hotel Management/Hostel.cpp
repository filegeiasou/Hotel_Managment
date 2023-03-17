#include "Hostel.h"


Hostel::Hostel()
{

}

Hostel::Hostel(int numberToRoom , string hotelName , int numRooms)
{
	this->numberToRoom = numberToRoom;
	this->hotelName = hotelName;
	this->numRooms = numRooms;
}

Hostel::~Hostel()
{
	cout << "Hostel says bye bye"<<endl;
}
