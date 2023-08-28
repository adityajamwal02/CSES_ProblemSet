/// CSES : Minimizing Coins

#include<bits/stdc++.h>
using namespace std;
/*
int helper(int i, int n, int target, vector<int> &coins, vector<vector<int>> &dp){
    //if(target==0) return 1;
    if(i==0){
        if(target%coins[0]==0) return target/coins[0];
    return 1e9;
    }
    if(dp[i][target]!=-1) return dp[i][target];
    int take=1e9;
    int notTake=helper(i-1,n,target,coins,dp);
    if(target-coins[i]>=0){
        take=1+helper(i,n,target-coins[i],coins,dp);
    }
return dp[i][target]=min(take,notTake);
}
*/

int minimumCoins(int n, int target, vector<int> &coins){
    //vector<vector<int>> dp(n+1,vector<int>(target+1,0));
    vector<int> prev(target+1,0), curr(target+1,0);
    for(int i=0;i<=target;i++){
        if(i%coins[0]==0) prev[i]=i/coins[0];
        else prev[i]=1e9;
    }
    for(int i=1;i<n;i++){
        vector<int> curr(target+1,0);
        for(int j=0;j<=target;j++){
            int take=1e9;
            int notTake=prev[j];
            if(j-coins[i]>=0){
                take=1+curr[j-coins[i]];
            }
        curr[j]=min(take,notTake);
        }
    prev=curr;
    }
return prev[target];
}

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    sort(coins.begin(),coins.end());
    int result=minimumCoins(n,x,coins);
    if(result>=1e9) cout<<-1<<endl;
    else cout<<result<<endl;

    return 0;
}
