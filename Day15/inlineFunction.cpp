#include <iostream>
using namespace std;

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}
// no extra memory usage
// no function call overhead
int main(int argc, char const *argv[])
{
    int a = 1, b = 3;
    int ans = 0;

    ans = getMax(a, b);

    cout << ans << endl;

    a = a + 2;
    b = b + 1;

    ans = getMax(a, b);
    cout << ans << endl;

    return 0;
}
