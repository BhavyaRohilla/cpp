#include <iostream>
using namespace std;

int main()
{
    int a[7] = {1, 8, 9, 6, 5, 4, 1};
    int n = 7, max;
    max = a[0];
    for (int i = 1; i < 7; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "Maximum Number is => " << max << endl;
    return 0;
}