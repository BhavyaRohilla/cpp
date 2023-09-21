#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "Fun 1 of base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun2()
    {
        cout << "Fun 2 of Derived" << endl;
    }
};

int main()
{
    Derived d;
    Base *ptr = &d;
    ptr->fun1();
    // ptr()->fun2();
    // d.fun1();
    // d.fun2();

    return 0;
}