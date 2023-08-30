/// CSES : Exponentiation

#include<bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

long long power(long long a, long long b){
    if(b==0) return 1;
    if(b%2==0){
        return ((power(a,b/2)%mod)*(power(a,b/2)%mod))%mod;
    }else{
        return (a*(power(a,b-1)%mod))%mod;
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        if(a==0 and b==0) cout<<1<<endl;
        else{
            long long result=power(a,b);
            result%=mod;
            cout<<result<<endl;
        }
    }

    return 0;
}
