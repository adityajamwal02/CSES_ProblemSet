/// CSES : Distributing Apples

#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;
long long dp[10000001];

void solve(){
    dp[0]=dp[1]=1;
    for(int i=2;i<=10000000;i++){
        dp[i]=(1LL*dp[i-1]*i)%mod;
    }
}

long long inversePower(long long a, long long b){
    long long ans=1;
    while(b){
        if(b%2){
            ans=(1LL*a*ans)%mod;
        }
        b/=2;
        a=(1LL*a*a)%mod;
    }
return ans;
}

long long binomialCoeff(long long n, long long k){
    if(k>n) return 0;
    long long res=dp[n];
    res=(res*inversePower(dp[k],mod-2))%mod;
    res=(res*inversePower(dp[n-k],mod-2))%mod;

return res;
}

int main(){
    long long n,m;
    cin>>n>>m;
    solve();
    long long result=binomialCoeff(n-1+m,m);
    cout<<result<<endl;

    return 0;
}
