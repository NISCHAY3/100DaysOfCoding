// question link-->https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true

#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a,int b,int c,int d){
    int maxi;
    if ((a>b)&&(a>c)&&(a>d))
    {
        maxi=a;
    }
    else if ((b>a)&&(b>c)&&(b>d)) 
    {
        maxi=b;
    }  
    else if ((c>b)&&(c>a)&&(c>d))
    {
        maxi=c;
    }    
    else if ((d>b)&&(d>c)&&(d>a))
    {
        maxi=d;
    }
    return maxi;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
