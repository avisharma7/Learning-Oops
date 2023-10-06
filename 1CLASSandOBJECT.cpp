// c++ syntax  for class
class student
{
public:
    int id; // data member
    int mobile;
    string name;

    int add(int x, int y)
    { // member functions
        return x + y;
    }
}

// syntax for object
student s = new student();