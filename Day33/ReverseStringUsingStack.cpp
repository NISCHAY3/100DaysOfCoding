#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string str = "nischay";
    stack<char> s1;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        s1.push(c);
    }
    string ans = "";
    while (!s1.empty())
    {
        char c = s1.top();
        ans.push_back(c);
        s1.pop();
    }
    cout << "reverse is : " << ans << endl;
    return 0;
}
