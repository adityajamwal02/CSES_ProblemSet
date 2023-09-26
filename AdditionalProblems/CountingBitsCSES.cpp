/// CSES : Counting Bits

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin>>n;
    long long dp[50]={0};
    dp[0]=1;
    for(int i=1;i<50;i++){
        dp[i]=2*dp[i-1]+((1LL<<(i-1))-1);
    }
    long long result=0;
    while(n>0){
        long long temp=log2(n);
        result+=dp[temp];
        temp=1LL<<temp;
        result+=(n-temp);
    n-=temp;
    }
    cout<<result<<endl;

    return 0;
}
