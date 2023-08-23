#include <iostream>
using namespace std;

int main()
{
    int a[10], n = 10, key;
    cout << "Enter Numbers => ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter Key => ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            cout << "Found At => " << i << endl;
            return 0;
        }
    }
    cout << "Not Found!!!" << endl;
    return 0;
}