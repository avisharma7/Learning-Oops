// COMPILE TIME POLYMORPHISM
/*
Compile time polymorphism, also known as Static
Polymorphism, refers to the type of Polymorphism that happens at compile time.
What it means is that the compiler decides what shape or value has to be taken by
the entity in the picture.

/*

implemented at compile time. for ex: method overloading
method overloading: more than one function having same name but different functionality
Method overloading can be possible on the following basics
1) return type of the overloaded function
2) type of parameter passed to the function
3) number of parameter passed to the function

*/

#include <bits/stdc++.h>
using namespace std;

class Add
{
public: // by default access modifier in cpp is private
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Add obj;
    int res1, res2;
    res1 = obj.add(2, 3);
    res2 = obj.add(2, 3, 4);
    cout << res1 << " " << res2;
    return 0;
}
/*
output: 5 9
add() is an overloaded function with a different number of paramters

*/