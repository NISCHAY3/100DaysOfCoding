#include <iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         cout << i << "";
//         i = i + 1;
//     }

//     return 0;
// }

//----code sum of n natural numbers-----
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     int sum = 0;
//     while (i <= n)
//     {
//         sum = sum + i;
//         i = i + 1;
//     }
//     cout << "value of sum is :" << sum << endl;

//     return 0;
// }

//----sum of even numbers----

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     int sum = 0;
//     while (i <= n)
//     {
//         if (i % 2 == 0)
//         {
//             sum = sum + i;
//             i = i + 1;
//         }
//         else
//         {
//             i = i + 1;
//         }
//     }
//     cout << "the value of sum of even numbers is:" << sum << endl;

//     return 0;
// }

//----code Prime Number----

int main()
{
    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "NOT PRIME FOR " << i << endl;
        }
        else
        {
            cout << "PRIME FOR" << i << endl;
        }
        i += 1;
    }

    return 0;
}
