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



    Customer mixalis("Mixalis", 40 , "4/03/2023","8/03/2023","6985783274");
    Customer giannis("Giannis", 20,"17/03/2023","19/03/2023","6932566358");
    


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


    return 0;

}