#include <iostream>
using namespace std; 

int main()
{
    int m1,m2,m3,total;
    float Avg;
    cout<<"Enter the Marks of Three Subject => ";
    cin>>m1>>m2>>m3;
    total =m1+m2+m3;
    Avg=total/3.0;
    if(Avg >= 60)
        cout<<"A"<<endl;
    else if(Avg >= 35 && Avg < 60)
        cout<<"B"<<endl;
    else
        cout<<"C"<<endl;
    return 0;
}