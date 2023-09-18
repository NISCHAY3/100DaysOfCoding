#include <iostream>
#include <array>
// this library is used for TL array operations;
using namespace std;

int main()
{
    int basic[3] = {1, 2, 3};
    // this i the standard way in jisme hum array lete aaye h abhi tk;

    array<int, 4> a = {1, 2, 3, 4};
    // STL ke through ese declre lrte hai array insme int is datatype of elements
    // 4 is size and a is name of the array;

    int size = a.size(); //.size()se size of array nikalta hai
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "element at index 2 is " << a.at(2) << endl;
    cout << "empty or not-->" << a.empty() << endl;
    // the above empty function return bool
    cout << "first element-->" << a.front() << endl;
    cout << "last element-->" << a.back() << endl;

    return 0;
}
