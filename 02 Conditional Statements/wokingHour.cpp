#include <iostream>
using namespace std; 

int main()
{
    int hour;
    cout<<"Enter Hour => ";
    cin>>hour;
    if(hour >= 9 && hour <= 18)
        cout<<"Working"<<endl;
    else
        cout<<"Leisure"<<endl;
    return 0;
}