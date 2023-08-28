/// CSES Coin Combinations 1

#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int countMinimumCoins(int n, int target, vector<int> &coins){
    vector<int> dp(target+1,0);
    dp[0]=1;
    for(int i=1;i<=target;i++){
        for(int j=0;j<n;j++){
            if(i-coins[j]>=0){
                dp[i]+=dp[i-coins[j]];
                dp[i]%=mod;
            }
        }
    }

return dp[target];
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
