// Question Link-->https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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
int main() {
    int n;
    cin>>n;  
    int arr[10000];
    for (int i=0; i<=n; i++) 
    {
        cin>>arr[i];
    }
    reverse(arr,n);
    printArray(arr,n);
    
    return 0;
}
