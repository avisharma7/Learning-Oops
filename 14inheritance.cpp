/* multilevel inheritance: When a derived class is derived from some other derived class then it is called as multilevel inheritance
 */
#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a vehicle\n";
    }
};

class FourWheeler : public Vehicle
{
public:
    FourWheeler()
    {
        cout << "This is a four-wheeler\n";
    }
};

class Car : public FourWheeler
{
public:
    Car()
    {
        cout << "This is a car\n";
    }
};

int main()
{
    Car obj; // Create an object of the Car class
    return 0;
}
/*
output:
his is a vehicle
This is a four-wheeler
This is a car
*/