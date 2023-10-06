#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "base class";
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "Derived class";
    }
};

int main()
{
    A *bptr; // jiska pointer bna uska hi function call hoga,
    B b;     // no matter kis class ka object bna ho
    bptr = &b;
    bptr->display();
}
/*
output: baseclass
*/