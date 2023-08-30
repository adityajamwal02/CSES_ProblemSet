/// CSES : Fibonacci Numbers

#include <bits/stdc++.h>
using namespace std;
#define long long long

const long mod=1e9+7;
map<long, long> dp;

long fib(long n) {
	if(dp.count(n)) return dp[n];
	long k=n/2;
	if(n%2==0){
		return dp[n]=(fib(k)*fib(k)+fib(k-1)*fib(k-1))%mod;
	}else{
		return dp[n]=(fib(k)*fib(k+1)+fib(k-1)*fib(k))%mod;
	}
}

main(){
	long n;
	cin>>n;
	dp[0]=dp[1]=1;
	cout<<(n==0 ? 0 : fib(n-1))<<endl;
}
