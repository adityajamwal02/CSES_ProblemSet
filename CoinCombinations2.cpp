/// CSES Coin Combinations 2

#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

/*
int helper(int i, int n, int target, vector<int> &coins, vector<vector<int>> &dp){
    if(target==0) return 1;
    if(i==0){
        if(target%coins[0]==0) return 1;
    return 0;
    }
    if(dp[i][target]!=-1) return dp[i][target];
    int take=0;
    int notTake=helper(i-1,n,target,coins,dp);
    if(target-coins[i]>=0){
        take=helper(i,n,target-coins[i],coins,dp);
    }
return dp[i][target]=(take%mod+notTake%mod)%mod;
}
*/

int countMinimumCoins(int n, int target, vector<int> &coins){
    vector<vector<int>> dp(n+1,vector<int>(target+1,0));
    for(int i=0;i<n;i++){
        dp[i][0]=1;
    }
    for(int i=0;i<=target;i++){
        if(i%coins[0]==0) dp[0][i]=1;
        else dp[0][i]=0;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=target;j++){
            int take=0;
            int notTake=dp[i-1][j];
            if(j-coins[i]>=0){
                take=dp[i][j-coins[i]];
            }
        dp[i][j]=(take%mod+notTake%mod)%mod;
        }
    }

return dp[n-1][target];
}

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int result=countMinimumCoins(n,x,coins);
    cout<<result<<endl;

    return 0;
}
