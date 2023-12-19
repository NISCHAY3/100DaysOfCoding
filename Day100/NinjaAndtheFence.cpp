// Question Link-->https://www.codingninjas.com/studio/problems/ninja-and-the-fence_3210208?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 
#define MOD 1000000007


int add(int a,int b){
    return (a%MOD + b%MOD)%MOD;
}
int multiply(int a,int b){

    return ((a%MOD)*1LL * (b%MOD))%MOD;

}

int solve(int n,int k){
    if(n==1){
        return k;
    }

    if(n==2){
        return add(k,multiply(k,k-1));
    }

    int ans=add(multiply(solve(n-2,k),k-1),multiply(solve(n-1,k),k-1));
    return ans;

}


int solveMem(int n,int k,vector<int>&dp){
    if(n==1){
        return k;
    }

    if(n==2){
        return add(k,multiply(k,k-1));
    }

    if(dp[n]!=-1){
        return dp[n];
    }

    dp[n]=add(multiply(solveMem(n-2,k,dp),k-1),multiply(solveMem(n-1,k,dp),k-1));
    return dp[n];

}




int solveTab(int n,int k){
    vector<int>dp(n+1,0);
    dp[1]=k;
    dp[2]=add(k,multiply(k,k-1));

    for(int i=3;i<=n;i++){

        dp[i]=add(multiply(dp[i-2],k-1),multiply(dp[i-1],k-1));
    }

    return dp[n];

}


int numberOfWays(int n, int k) {
    // return solve(n,k);

    // vector<int> dp(n+1,-1);
    // return solveMem(n,k,dp);

    return solveTab(n,k);
     
}
