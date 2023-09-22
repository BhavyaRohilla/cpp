#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "john"));
    m.insert(pair<int, string>(2, "Ravi"));

    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    return 0;
}