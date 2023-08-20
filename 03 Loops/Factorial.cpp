#include <iostream>
using namespace std;

int main()
{
    int n, i, fact = 1;
    cout << "Enter N => ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " is => " << fact << endl;
    return 0;
}