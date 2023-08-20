#include <iostream>
using namespace std;

int main()
{
    int n, r, sum = 0, m;
    cout << "Enter N => ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum += r * r * r;
    }
    if (sum == m)
        cout << "It's Armstrong \n";
    else
        cout << "Not Armstrong \n";
    return 0;
}