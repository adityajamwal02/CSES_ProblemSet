/// CSES : Sum of Divisors

#include<bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;

long long exp(long long a, unsigned long long b){
    long long ans=1;
    a%=b;
    while(b>0){
        if(b&1){
            ans=(1LL*a*ans)%mod;
        }
        b=b>>1;
        a=(1LL*a*a)%mod;
    }
return ans;
}

signed main(){
    long long n, result=0;
    cin>>n;
    long long sq=sqrt(n);
    long long inv=exp(2,mod-2);
    for(long long i=1;i<=sq;i++){
        long long x=(n/i - n/(i+1))%mod;
        long long r=n/i , l=n/(i+1)+1;
        result=(result+x*((l+r)%mod)%mod * inv%mod*i%mod)%mod;
    }
    for(long long i=1;i<=n/(sq+1);i++){
        result=(result+n/i*i)%mod;
    }
    cout<<result<<endl;

    return 0;
}
