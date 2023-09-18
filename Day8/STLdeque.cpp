#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    cout << "print 1st index ele-->" << d.at(1) << endl;

    cout << "is Empty?" << d.empty() << endl;

    // d.erase is used for delting enlemt isme dena pdhta h khn se khn tk delete krna hai

    return 0;
}
