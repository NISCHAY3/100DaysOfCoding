#include <iostream>
using namespace std;

const int MAX = 3;

int diagonalSum(int mat[MAX][MAX])
{
    int sum = 0;

    for (int i = 0; i < MAX; i++)
    {
        sum += mat[i][i];          
        sum += mat[i][MAX - 1 - i];
    }


    if (MAX % 2 == 1)
    {
        sum -= mat[MAX / 2][MAX / 2];
    }

    return sum;
}

int main()
{
    int mat[MAX][MAX];

    cout << "Enter elements of the " << MAX << "x" << MAX << " matrix:" << endl;

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cin >> mat[i][j];
        }
    }

    int result = diagonalSum(mat);
    cout << "Diagonals sum: " << result << endl;
    return 0;
}
