#include <iostream>
using namespace std;

// class employees
// {
// public:
//     static int total;
//     employees()
//     {
//         total += 1;
//     }
// };

// int employees::total = 0;

// int main()

// {
//     employees e1;
//     cout << e1.total << endl;
//     employees e2;
//     cout << e2.total << endl;
//     employees e3;
//     cout << e3.total << endl;

//     return 0;
// }

// class Topics
// {
//     static int number;

//     string stream = "geometry";

// public:
//     static void total_topics()
//     {
//         cout << "topics covered: " << number << endl;
//     }
// };
// int Topics::number = 7;

// int main(int argc, char const *argv[])
// {
//     Topics t1;
//     t1.total_topics();
//     Topics::total_topics();
//     return 0;
// }

// int gcd(int a, int b)
// {
//     int temp;
//     while (b != 0)
//     {
//         temp = a % b;
//         a = b;
//         b = temp;
//     }
//     return (a);
// }
// int main()
// {
//     int x = 7, y = 13;
//     cout << gcd(x, y);
//     return (0);
// }

// void lfc(int p)
// {
//     cout << p;
// }
// void lfc(double q)
// {
//     cout << q;
// }
// int main(void)
// {
//     lfc(5);
//     lfc(555.263);
//     return 0;
// }

// void recursion(int n, int start)
// {
//     if (start == n + 1)
//     {
//         return;
//     }
//     cout << start << " ";
//     recursion(n, start + 1);
//     cout << start << " ";
// }
// int main()
// {
//     int n;
//     cin >> n;
//     recursion(n, 1);
// }

int main()
{
    int n, missing = -1;
    cout << "enter the size of array : ";
    cin >> n;
    int arr[n], ans[n];
    for (int i = 0; i < n; i++)
    {
        cout << "element " << i << " : ";
        cin >> arr[i];
    }
    for (int i = 0; i < n + 1; i++)
    {
        ans[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                ans[arr[j]] = 1;
                break;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (ans[i] == 0)
        {
            cout << i;
        }
    }
}
