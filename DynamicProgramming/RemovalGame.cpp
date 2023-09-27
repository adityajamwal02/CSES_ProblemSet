/// CSES : Removal Game

#include<bits/stdc++.h>
using namespace std;

long long helper(int i, int j, int n, vector<long long> &nums, vector<vector<long long>> &dp){
    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    long long left=nums[i]+min(helper(i+1,j-1,n,nums,dp),helper(i+2,j,n,nums,dp));
    long long right=nums[j]+min(helper(i+1,j-1,n,nums,dp),helper(i,j-2,n,nums,dp));
return dp[i][j]=max(left,right);
}

long long removalGame(int n, vector<long long> &nums){
    vector<vector<long long>> dp(n+1,vector<long long>(n+1,-1));
    return helper(0,n-1,n,nums,dp);
}

int main(){
    int n;
    cin>>n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    long long result=removalGame(n,nums);
    cout<<result<<endl;

    return 0;
}
