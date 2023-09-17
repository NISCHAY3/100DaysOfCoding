#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        // this for loop is for rounds 1 to n-1
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
int main()
{
    int arr[6] = {1, 7, 6, 10, 9, 14};
    printArray(arr, 6);
    cout << "after sorting:" << endl;
    bubbleSort(arr, 6);
    printArray(arr, 6);

    return 0;
}
