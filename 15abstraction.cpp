/*
abstaction can be provided by using access modifier,
the internal implementation that we want to hide from user, we can implement them using private
where the information that we want to give access to the user can be public
and this public varible can access to the private  members.

2nd is importing math.h we are implementing pow() function to find the power of any number
we are not concerend about the implementation of pow() function in math.h library, we are just using it and doing our work

*/

// implementation of data abstraction using access modifiers
#include <iostream>
using namespace std;

class A
{
private:
    int x;
    int y;

public:
    void set(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "x's value is " << x;
        cout << endl;
        cout << "y's value is " << y;
    }
};

int main()
{
    A obj;
    obj.set(2, 4);
    obj.display();
}
