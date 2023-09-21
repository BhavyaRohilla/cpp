#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Rectangle()
    // {
    //     length = 1;
    //     breadth = 1;
    // }

    Rectangle(int length = 1, int breadth = 1)
    {
        setLength(length);
        setBreadth(breadth);
    }

    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    void setLength(int l)
    {
        if (l < 0)
            length = 1;
        else
            length = l;
    }

    void setBreadth(int b)
    {
        if (b < 0)
            breadth = b;
        else
            breadth = b;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1(10, 5);
    Rectangle r2(r1);
    // cout << r1.area() << endl;
    cout << r2.area() << endl;
}