#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 5, 6};
    cout << arr[0] << endl;

    cout << "address of the first memory block is :" << &arr[0] << endl;

    cout << "4th " << *arr << endl;

    cout << "5th " << *arr + 1 << endl;

    cout << "6th " << *(arr + 1) << endl;

    return 0;
}
