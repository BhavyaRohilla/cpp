#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a Number => ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum to First " << n << " Natural Numbers is => " << sum << endl;
    return 0;
}