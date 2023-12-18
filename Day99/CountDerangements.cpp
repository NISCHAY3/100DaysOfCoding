// Question Link-->https://www.codingninjas.com/studio/problems/count-derangements_873861?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

#define MOD 1000000007
#include<vector>

long long int solve(int n, vector<long long int> &dp){

    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    if(dp[n]!=-1){
        return dp[n];
    }

    dp[n]=(  ((n-1)%MOD) * ((solve(n-1,dp)%MOD)+(solve(n-2,dp) % MOD ))%MOD);

    return dp[n];


}

long long int solveTab(int n ){

    vector<long long int>dp(n+1,0);
    dp[1]=0;
    dp[2]=1;

    for(int i=3;i<=n;i++){
        long long int first=dp[i-1]%MOD;
        long long int second=dp[i-2]%MOD;

        long long int sum=(first+second) % MOD;

        long long int ans= ((i-1)*sum %MOD);

        dp[i]=ans;
    }

    return dp[n];


}


long long int countDerangements(int n) {

    // vector<long long int> dp(n+1,-1);
    // return solve(n,dp);
    return solveTab(n);

    
}