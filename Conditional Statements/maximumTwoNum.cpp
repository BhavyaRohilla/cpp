#include <iostream>
using namespace std; 

int main()
{
    int x, y;
    cout<<"Enter 2 Numbers => ";
    cin>>x>>y;
    if(x > y)
        cout<<"Max is => "<<x<<endl;
    else
        cout<<"Max is => "<<y<<endl;
    return 0;
}