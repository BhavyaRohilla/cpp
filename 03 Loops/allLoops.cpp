#include <iostream>
using namespace std;

int main()
{
    // While Loop
    int a = 0;
    while (a < 10)
    {
        cout << "a => " << a << endl;
        a++;
    }

    // Do While
    int b = 0;
    do
    {
        cout << "b => " << b << endl;
        b++;
    } while (b < 10);

    // For Loop
    for (int i = 0; i < 10; i++)
    {
        cout << "i => " << i << endl;
    }

    return 0;
}