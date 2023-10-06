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
    class B obj;
    obj.display();
    cout << endl;
}
/*
output: Derived class
*/

/* derived class has overriden the function of base class

and if you want to call base class function  to then add this line after obj.display();
obj.A::display
means obj object go to A class and call display function
*/