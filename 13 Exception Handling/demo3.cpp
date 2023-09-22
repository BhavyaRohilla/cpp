#include <iostream>
using namespace std;

class MyException1 : exception
{
};

class MyException2 : public MyException1
{
};

int main()
{
    try
    {
        // throw 'a';
        // throw string("hi");
        throw MyException1();
    }
    catch (int e)
    {
        cout << "Int Catch" << endl;
    }
    catch (double e)
    {
        cout << "Double Catch" << endl;
    }
    catch (...)
    {
        cout << "All Catch" << endl;
    }
    return 0;
}