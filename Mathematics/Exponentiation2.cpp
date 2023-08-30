/// CSES : Exponentiation 2

#include<bits/stdc++.h>
using namespace std;

long long power(long long a, long long b, long long mod){
    a%=mod;
    if(a==0 and b==0) return 1;
    if(b==0) return 1;
    if(b%2==0){
        return ((power(a,b/2,mod)%mod)*(power(a,b/2,mod)%mod))%mod;
    }else{
        return (a*(power(a,b-1,mod)%mod))%mod;
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a,b,c;
        long long mod=1e9+7;
        cin>>a>>b>>c;
        long long result=power(b,c,mod-1);
        result%=mod;
        long long ans=power(a,result,mod);
        ans%=mod;
        cout<<ans<<endl;
    }

    return 0;
}
