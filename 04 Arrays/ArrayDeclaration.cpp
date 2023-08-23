#include <iostream>
using namespace std;

int main()
{
    int b[5] = {2, 8, 4, 5, 6};
    int a[5] = {3, 4};
    int c[5] = {0};
    int d[] = {2, 4, 6, 8, 10, 12};
    float e[] = {2.5f, 5.6f, 9, 8, 7};
    char f[] = {'A', 66, 'C', 68};

    for (int i = 0; i < 5; i++)
        cout << a[i] << endl;

    for (int x : d)
        cout << x << endl;

    for (auto x : e)
        cout << x << endl;

    for (auto x : f)
        cout << x << endl;

    return 0;
}