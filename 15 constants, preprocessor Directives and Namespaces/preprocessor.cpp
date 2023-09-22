#include <iostream>
using namespace std;

#define max(x, y) (x > y ? x : y)
#define PI 3.1425
#define msg(x) #x

#ifndef PI
#define PI 3
#endif

int main()
{
    cout << PI << endl;
    cout << max(10, 12) << endl;
    cout << msg(hello) << endl;
    return 0;
}