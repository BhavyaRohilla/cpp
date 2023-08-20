#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;
    cout << "Enter N => ";
    cin >> n;

    for (int i = 1; i < n; i++) // Start from 1 and go up to n - 1
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n) // Check if the sum of divisors equals the number itself
        cout << "Perfect Number" << endl;
    else
        cout << "Not a Perfect Number" << endl;
    return 0;
}
