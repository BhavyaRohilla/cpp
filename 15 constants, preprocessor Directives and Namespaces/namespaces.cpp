#include <iostream>
using namespace std;

namespace First
{
    void fun()
    {
        cout << "First" << endl;
    }
};

namespace Second
{
    void fun()
    {
        cout << "Second" << endl;
    }
};

using namespace First;
int main()
{
    // First::fun();
    fun();
    Second::fun();
    return 0;
}