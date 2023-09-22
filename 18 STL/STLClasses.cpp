#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 6, 8, 10};
    v.push_back(20);
    v.push_back(30);
    v.pop_back();

    vector<int>::iterator itr;
    cout << "using Iterator" << endl;
    for (itr = v.begin(); itr != v.end(); itr++)
        cout << *itr << endl;
    cout << "Using For Loop" << endl;
    for (int x : v)
        cout << x << endl;
    return 0;
}