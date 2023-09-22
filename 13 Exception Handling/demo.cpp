#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 5, z;
    try
    {
        if (y == 0)
            throw 101;
        z = x / y;
        cout << z << endl;
    }

    catch (int e)
    {
        cout << "Divison by Zero : "
             << "Error Code : " << e << endl;
    }
    cout << "Bye" << endl;

    return 0;
}