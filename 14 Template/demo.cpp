#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T *stk;
    int top;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }

    void push(T x)
    {
        if (top == size - 1)
            cout << "Stack is Full";
        else
        {
            top++;
            stk[top] = x;
        }
    }

    T pop()
    {
        T x = T(); // Initialize with a default value for T
        if (top == -1)
            cout << "Stack is Empty" << endl;
        else
        {
            x = stk[top];
            top--;
        }
        return x;
    }
};

int main()
{
    Stack<float> s(10);
    s.push(10.0);
    s.push(23.0);

    // Pop and print elements from the stack
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    return 0;
}
