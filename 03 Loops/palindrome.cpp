#include <iostream>
using namespace std;

int main()
{
    int n, r, rev = 0, m;
    cout << "Enter Number => ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    if (m == rev)
        cout << "Is's Palindrome \n";
    else
        cout << "Not Palindrome \n";
    return 0;
}