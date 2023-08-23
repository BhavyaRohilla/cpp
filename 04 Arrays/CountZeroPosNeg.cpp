#include <iostream>
using namespace std;

int main()
{
    int arr[100], count, i, nCount = 0, pCount = 0, zCount = 0;

    cout << "Enter Number Of Element In Array\n ";
    cin >> count;

    cout << "Enter Numbers => ";
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < count; i++)
    {
        if (arr[i] < 0)
            nCount++;
        else if (arr[i] > 0)
        {
            pCount++;
        }
        else
        {
            zCount++;
        }
    }

    cout << "Neagitive Numbers => " << nCount << endl;
    cout << "Positive Numbers => " << pCount << endl;
    cout << "Zeroes => " << zCount << endl;

    return 0;
}