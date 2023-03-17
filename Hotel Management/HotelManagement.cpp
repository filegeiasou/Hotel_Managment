#include "Hostel.h"
#include "Person.h"
int main()
{
    Hotel palace(3, "Palace");
    Hostel arion(10, "Arion" , 3);

    cout << arion;

    Employee maria("Maria", 30, "Cleaner", 1500.0);
    Employee john("John", 28, "Barman", 2000.0);
    //cout << maria;

    palace += &maria;
    palace += &john;
    palace.printEmployees(cout);



    Person mixalis("Mixalis", 40);
    Person giannis("Giannis", 20);


    palace.getRoom(&mixalis);
    palace.getRoom(&giannis);

    int a;
     a = palace.getNumRooms();
    cout <<"Avaluable rooms "<<  a << endl;

    palace.printCustomers(cout);

    palace.leaveRoom();
    a = palace.getNumRooms();
    cout << "Avaluable rooms  " << a << endl;

    palace.printCustomers(cout);

    cout << "See you soon"<<endl;

    return 0;

}