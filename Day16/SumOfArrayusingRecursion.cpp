#include <iostream>
using namespace std;

int getSum(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    return arr[0] + getSum(arr + 1, size - 1);
}
int main()
{
    int arr[5] = {2, 3, 7, 5, 8};
    int size = 5;
    int sum = getSum(arr, size);

    cout << "sum is: " << sum << endl;

    return 0;
}
