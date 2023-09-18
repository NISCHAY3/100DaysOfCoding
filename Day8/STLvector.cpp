#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    // age phle se se size deke rkhna hai to
    // vector<int>a(5,1) here 5 is size ang 1 is assigned value to every elemnt
    cout << "capacity-->" << v.capacity() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << "capacity-->" << v.capacity() << endl;
    cout << "size-->" << v.size() << endl;

    cout << "Elemnts at index 2-->" << v.at(2) << endl;

    cout << "front:" << v.front() << endl;
    cout << "back:" << v.back() << endl;

    cout << "befor pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // vector ko khali krne ke liye v.clear;

    return 0;
}
