/// CSES : Josephus Queries

#include<bits/stdc++.h>
using namespace std;

long long josephusQueries(long long n, long long k){
    if(n==1) return 1;
    if(k<=(n+1)/2){
        if(2*k>n) return 2*k%n;
        else return 2*k;
    }
    int temp=josephusQueries(n>>1, k-(n+1)/2);
    if(n&1) return 2*temp+1;
    else return 2*temp-1;
}

int main(){
    int q;
    cin>>q;
    while(q--){
        long long n,k;
        cin>>n>>k;
        cout<<josephusQueries(n,k)<<endl;
    }
    return 0;
}
