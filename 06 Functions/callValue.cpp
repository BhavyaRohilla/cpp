#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "In Function Swap => " << a << " " << b << endl;
}

int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << "In Main Function => " << x << " " << y << endl;
    return 0;
}