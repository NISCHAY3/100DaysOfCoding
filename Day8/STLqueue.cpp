#include <iostream>
#include <queue>
using namespace std;
int main()

{
    queue<string> q;
    q.push("nischay");
    q.push("bareja");
    q.push("panipat");

    cout << "front element-->" << q.front() << endl;
    q.pop();
    cout << "front element-->" << q.front() << endl;

    return 0;
}
