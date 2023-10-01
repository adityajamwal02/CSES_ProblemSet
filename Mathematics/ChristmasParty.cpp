/// CSES : Christmas Party

#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;

int helper(int n){
    if(n==0) return 1;
    if(n==1) return 0;
    long long dp[n+1];
    dp[0]=1;
    dp[1]=0;
    for(int i=2;i<=n;i++){
        dp[i]=((i-1)%mod*(dp[i-1]%mod+dp[i-2]%mod)%mod)%mod;
    }
return dp[n]%mod;
}

int main(){
    int n;
    cin>>n;
    int result=helper(n);
    cout<<result<<endl;

    return 0;
}
