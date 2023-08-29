/// CSES : Increasing Subsequence

#include<bits/stdc++.h>
using namespace std;

/* O(n^2) Solution

int longestIncreasingSubsequence(int n, vector<int> &nums){
    vector<int> dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<n;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(nums[i]>nums[j] and dp[i]<1+dp[j]){
                dp[i]=1+dp[j];
            }
        }
    }
return *max_element(dp.begin(),dp.end());
}
*/

int longestIncreasingSubsequence(int n, vector<int> &nums){
    vector<int> dp;
    dp.push_back(nums[0]);
    for(int i=1;i<n;i++){
        if(nums[i]>dp[dp.size()-1]){
            dp.push_back(nums[i]);
        }else{
            *lower_bound(dp.begin(),dp.end(),nums[i])=nums[i];
        }
    }
    return dp.size();
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result=longestIncreasingSubsequence(n,nums);
    cout<<result<<endl;

    return 0;
}
