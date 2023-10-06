// virtual function:: jis class ka object bnega us class ka function call hoga

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    virtual void display()
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
    A *bptr;
    B b; // jis class ka object bnega us class ka function call hoga
    bptr = &b;
    bptr->display();
}
/*
output: derived class:: bcz B's object b is created
*/