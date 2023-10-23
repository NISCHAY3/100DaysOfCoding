// Quesntion Link-->https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

#include <iostream>
#include <string>
using namespace std;

int main() {
	int a,b;
    string s1;
    string s2;
    
    cin>>s1;
    cin>>s2;
    
    a=s1.length();
    b=s2.length();
    cout<<a<<" "<<b<<endl;
    cout<<s1+s2<<endl;

    swap(s1[0],s2[0]);
    
    cout<<s1<<" "<<s2<<endl;
    
    
    
  
    return 0;
}
