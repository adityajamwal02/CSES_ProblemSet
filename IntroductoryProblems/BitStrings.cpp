/// CSE : Bit Strings

#include<bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

long long power(int num, int n){
    if(n==0) return 1;
    if(n%2==0){
        return (power(num,n/2)%mod)*(power(num,n/2)%mod);
    }else{
        return num*power(num,n-1)%mod;
    }
}

int main(){
    int n;
    cin>>n;
    long long result=power(2,n);
    result%=mod;
    cout<<result;

    return 0;
}
