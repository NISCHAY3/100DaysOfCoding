#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < 5; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < 5; j++) // N-1 TK CHLAYENEGE JB USER INPUT LENGE!!!
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
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
    int arr[5] = {1, 7, 9, 2, 3};
    selectionSort(arr, 5);
    printArray(arr, 5);
    return 0;
}
