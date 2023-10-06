// Cpp program to demonstrate implementation of inheritance::
#include <bits/stdc++.h>
using namespace std;

class parent
{
public:
    int parent_id;
    void display()
    {
        cout << "hi ";
    }
};

// sub class inheriting from base class
class child : public parent
{
public:
    int child_id;
};

// main function
int main()
{
    child obj;
    // an object of child class has all objects and methods of both the class
    obj.child_id = 7;
    obj.parent_id = 10;
    cout << "child id is " << obj.child_id << endl;
    cout << "parent id is " << obj.parent_id;
    cout << endl;
    obj.display();
    return 0;
}