// #include <iostream>
// using namespace std;

// #define PI 3.14

// int main()
// {
//     int r = 4;
//     // double pi = 3.14;
//     int area = PI * r * r;
//     cout << "area is : " << area << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

// Multiline Macro definition
#define ELE 1, \
            2, \
            3

int main()
{
    int arr[] = {ELE};

    printf("Elements of Array are:\n");

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}