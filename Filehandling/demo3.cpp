#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    friend ofstream &operator<<(ofstream &ofs, Student &s);
};
ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}

int main()
{
    Student s1;
    s1.name = "John";
    s1.roll = 10, s1.branch = "CS";

    ofstream ofs("Student.txt", ios::trunc);
    ofs << s1;
    ofs.close();

    return 0;
}