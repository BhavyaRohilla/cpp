#include <iostream>
using namespace std;

int maximum(int a, int b, int c)
{
    if (a > b && a > c)
        return a;

    else if (b > c)
        return b;

    else
        return c;
}

int main()
{
    int a, b, c, d;
    cout << "Enter three Number's => ";
    cin >> a >> b >> c;

    d = maximum(a, b, c);
    cout << "Maximum is => " << d << endl;
    return 0;
}