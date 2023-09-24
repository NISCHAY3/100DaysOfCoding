#include <iostream>
using namespace std;

void update1(int n)
{
    n++; // no incriment in this case
}
void update2(int &n)
{
    n++; // is function mai humne n ko reference variable bnya hai toh incriment hogyi value
}

int main()
{
    int i = 5;

    // int &j = i; // this is how we create reference variable

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    cout << "before " << i << endl;
    update2(i);
    cout << "after " << i << endl;

    return 0;
}
