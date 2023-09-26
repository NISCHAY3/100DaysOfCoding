#include <iostream>
using namespace std;

bool LRsearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        return LRsearch(arr + 1, size - 1, key);
    }
}

int main()
{
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 2;
    bool ans = LRsearch(arr, size, key);
    if (ans)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "absent" << endl;
    }

    return 0;
}
