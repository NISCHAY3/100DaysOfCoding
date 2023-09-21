#include <iostream>
using namespace std;

int printSumRowWise(int arr[][4], int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    return 0;
}

int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "printing the sum row wise: " << endl;
    int rowSum = printSumRowWise(arr, 3, 4);
    cout << rowSum;

    return 0;
}
