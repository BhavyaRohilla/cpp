#include <iostream>
using namespace std; 

int main()
{
    int day;
    cout<<"Enter Day Number => ";
    cin>>day;
    if(day == 1)
        cout<<"Monday"<<endl;
    else if(day == 2)
        cout<<"Tuesday"<<endl;
    else if(day == 3)
        cout<<"wednesday"<<endl;
    else if(day == 4)
        cout<<"Thrusday"<<endl;
    else if(day == 5)
        cout<<"Friday"<<endl;
    else if(day == 6)
        cout<<"Saturday"<<endl;
    else if(day == 7)
        cout<<"sunday"<<endl;
    else
        cout<<"Invalid Day Number!!"<<endl;
    return 0;
}