/// CSES : Bracket Sequences 1

#include<bits/stdc++.h>
using namespace std;

#define int long long
const int mod=1e9+7;
const int limit=2e6+6;
int F[limit], I[limit];

int exp(int x, int y, int mod){
    int ans=1;
    x=x%mod;
    while(y>0){
        if(y&1) ans=ans*x%mod;
        y=y>>1;
        x=x*x%mod;
    }
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    if(n&1){
        cout<<0<<endl;
    }else{
        n>>=1;
        F[0]=1,I[0]=1;
        for (int i=1;i<limit;i++) {
            F[i]=F[i-1]*i%mod;
            I[i]=exp(F[i],mod-2,mod);
        }
        int ans=F[2*n]*I[n]%mod*I[n]%mod;
        ans=ans*exp(n+1,mod-2,mod)%mod;
        cout<<ans<<endl;
    }
return 0;
}
