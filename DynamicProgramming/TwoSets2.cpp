/// CSES : Two Sets 2

#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;

long long targetSum(int n, long long totalSum, vector<int> &nums){
    if(totalSum%2!=0) return 0;
    long long target=totalSum/2;
    vector<vector<int>> dp(n+1,vector<int> (target+1,0));
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=target;j++){
            dp[i][j]=dp[i-1][j];
            if(j-nums[i]>=0){
                dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i]];
                dp[i][j]%=mod;5
            }
        }
    }
return dp[n-1][target];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<int> nums(n);
    long long totalSum=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        nums[i]=i+1;
    }
    long long result=targetSum(n,totalSum,nums);
    cout<<result<<endl;

    return 0;
}
