// question link- https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    for (int i=a; i<=b; i++) {
        if ((a>=1&&a<=9)) {
            string name[10]={"","one","two","three","four","five","six","seven","eight","nine"};
            for (; a<=b; a++) {
                if (a<=9) {
                    cout<<name[a]<<endl;   
                }
                if (a>9) {
                    for (; a<=b; a++) {
                        if (a%2==0) {
                            cout<<"even"<<endl;
                            
                        }
                        else{
                            cout<<"odd"<<endl;
                            
                        }
                    }
                }
                
            }
        
        
        }
    
    }
    return 0;
}
