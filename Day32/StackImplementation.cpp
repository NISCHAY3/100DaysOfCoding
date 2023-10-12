#include <iostream>
using namespace std;

class Stack
{

public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int(size);
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack Underflow" << endl;
        }
    }

    int peak()
    {

        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return -1;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack s(5);

    s.push(20);
    s.push(21);
    s.push(22);

    cout << s.peak() << endl;
    s.pop();
    cout << s.peak() << endl;
    s.pop();
    cout << s.peak() << endl;
    s.pop();
    cout << s.peak() << endl;

    if (s.isEmpty())
    {
        cout << "yes stack is empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }

    return 0;
}
