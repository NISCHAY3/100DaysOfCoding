#include <iostream>
#include <string>
using namespace std;
char getMaxOcc(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}
int main()
{
    string s;
    cin >> s;
    cout << getMaxOcc(s) << endl;

    return 0;
}
