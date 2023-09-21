#include <iostream>
using namespace std;

int main()
{
    // creating 2-D array
    int arr[3][4];

    // taking input row wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // for taking input column wise start with j that is
    //  column number with outer loop and i that is row in inner loop

    // printing output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // khud se jb dena ho ki knsi row mai knse nums aayenge

    int arr2[3][3] = {{1, 11, 111}, {2, 22, 222}, {3, 33, 333}};

    // printing output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
