#include <iostream>
using namespace std;

int main()
{
    int arr[1000], n, key;
    cout << "Enter Number Count => ";
    cin >> n;
    int start = 0, end = n - 1, mid;
    cout << "Enter Values => ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Please Enter The Key => ";
    cin >> key;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == arr[mid])
        {
            cout << "Found At => " << mid << endl;
            return 0;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Not Found" << endl;

    return 0;
}