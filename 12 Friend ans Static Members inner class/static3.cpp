#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    static int addNo;

    Student(string n)
    {
        addNo++;
        roll = addNo;
        name = n;
    }

    void display()
    {
        cout << "Name => " << name << endl
             << "Roll => " << roll << endl;
    }
};

int Student::addNo = 0;

int main()
{
    Student t1("Bread");
    Student t2("john");
    Student t3("ravi");
    Student t4("romil");
    Student t5("ram");
    Student t6("sham");
    t1.display();
    t6.display();
    cout << "Number of Admission => " << Student::addNo << endl;

    return 0;
}