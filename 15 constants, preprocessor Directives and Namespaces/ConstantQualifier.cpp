#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 10;
    int y = 20;

    void display() const
    {
        // x++; can't modify
        cout << x << " " << y << endl;
    }
};

void fun(const int &a, int &b)
{
    cout << a << " " << b << endl;
    // a++; can't modify
}

int main()
{
    int x = 10;
    int y = 20;
    fun(x, y);
    cout << "Main =>" << x << " " << y << endl;
    /*
    Demo d;
    d.display();
    */
    /*
    int x = 10;
    const int *ptr=&x;
    ++*ptr; can't modify
    */
    /*
    int const x = 10;
    const int x = 10;
    x++; can't modify
    */
    return 0;
}