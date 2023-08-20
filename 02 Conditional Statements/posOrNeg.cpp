#include <iostream>
using namespace std; 

int main()
{
    int num;
    cout<<"Enter Number => ";
    cin>>num;

    if(num > 0)
        cout<<"The Number is Positive"<<endl;
    else if(num == 0)
        cout<<"The Number is Zero"<<endl;
    else
        cout<<"The Number is Neagitive"<<endl;

    return 0;
}