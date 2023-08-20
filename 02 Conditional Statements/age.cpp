#include <iostream>
using namespace std; 

int main()
{
    int age;
    cout<<"Enter Your Age => ";
    cin>>age;

    if(age>=12 && age <=50)
        cout<<"Young"<<endl;
    else
        cout<<"Not Young"<<endl;
    
    if(age<12 || age>50)
        cout<<"Eligible for the offer"<<endl;
    else
        cout<<"Not Eligible for the offer"<<endl;
    
    
    return 0;
}