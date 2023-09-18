#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "nischay";
    m[2] = "bareja";
    m[13] = "panipat";
    m.insert({5, "bheem"});
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "finding the 13-->" << m.count(13) << endl;

    return 0;
}
