#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout << "Fun of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun()
    {
        cout << "Fun of Derived" << endl;
    }
};

int main()
{
    Derived d;
    Base *ptr = &d;
    ptr->fun();
    d.fun();
    return 0;
}