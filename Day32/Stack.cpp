#include <iostream>
#include <stack>

using namespace std;

int main()
{

    stack<int> S1;

    S1.push(2);
    S1.push(3);
    S1.pop();

    cout << "top ele: " << S1.top() << endl;

    if (S1.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }

    cout << "size of S1: " << S1.size() << endl;

    return 0;
}
