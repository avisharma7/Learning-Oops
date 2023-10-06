/*
types of inheritance
1) single inheritance: when a class is inherited by only one parent class
2) Multiple inheritance: when a class is inherited by more than one parent class

*/
// Demo of multiple inheritance
#include <bits/stdc++.h>
using namespace std;

// first base class
class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle \n";
    }
};

// 2nd base class
class fourwheeler
{
public:
    fourwheeler()
    {
        cout << "This is a fourwheeler \n";
    }
};

// Sub class deriving from two base class
class car : public vehicle, public fourwheeler
{
};

int main()
{
    car obj;
}