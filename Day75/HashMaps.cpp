#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

    unordered_map<string, int> m; // creation

    // insertion

    // 1st way
    pair<string, int> p = make_pair("nischay", 3);
    m.insert(p);

    // 2nd way
    pair<string, int> p2("bareja", 2);
    m.insert(p2);

    // 3rd way
    m["my"] = 1;

    // searching

    cout << m["my"] << endl;
    cout << m.at("bareja") << endl;

    // size
    cout << m.size() << endl;

    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // iterator

    unordered_map<string, int>::iterator it = m.begin();

    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}
