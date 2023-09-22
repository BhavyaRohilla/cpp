#include <iostream>
using namespace std;

class BasicCar
{
public:
    virtual void start() { cout << "BasicCar Started" << endl; }
};

class AdvanceCar : public BasicCar
{
public:
    void start() { cout << "AdvancedCar Started" << endl; }
};

int main()
{
    BasicCar *p = new AdvanceCar();
    p->start();
    return 0;
}