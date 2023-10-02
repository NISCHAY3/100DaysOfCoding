#include <iostream>
using namespace std;
// compile time polymorphism function overloading

class A
{

public:
    void sayHello()
    {
        cout << "Nischay bareja" << endl;
    }

    int sayHello(char name)
    {
        cout << "Nischay Bareja" << endl;
        return 1;
    }

    void sayHello(string name)
    {
        cout << "Nischay " << name << endl;
    }
};

// operator oberloading

class B
{

public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;
    }
};

int main()
{

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    // A obj1;
    // obj1.sayHello();

    return 0;
}
