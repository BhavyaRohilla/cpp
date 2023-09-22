#include <iostream>
using namespace std;

class Demo
{
    int *p;

public:
    Demo()
    {
        p = new int[10];
        cout << "Counstructor of Demo" << endl;
    }
    ~Demo()
    {
        delete[] p;
        cout << "Destructor of Demo" << endl;
    }
};

void fun()
{
    Demo *p = new Demo();
    delete p;
}

int main()
{
    fun();
    return 0;
}