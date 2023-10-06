#include <bits/stdc++.h>
using namespace std;

class Add
{
public:
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
    int res1 = obj.add(2, 4);
    int res2 = obj.add(2, 4, 6);
    cout << res1 << endl;
    cout << res2 << endl;
    return 0;
}