#include <iostream>
using namespace std;

void print(int arr[], int n, int start = 0)
// humne start ko ek default value dedi 0
// jb koi value denge toh vhn se hga start otherwisw default
// always right most hi hta h default agr usse next ko krna h to uske right vala default hna chahiye

{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 4, 2, 3, 4};
    int size = 5;
    print(arr, size);

    cout << endl;

    print(arr, size, 2);
    return 0;
}
