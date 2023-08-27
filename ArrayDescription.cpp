/// CSES : Array Description

#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int countArrays(int n, int m, vector<int> &nums){
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    int result=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1){
                if(nums[i]==0 or nums[i]==j) dp[i][j]=1;
                else dp[i][j]=0;
            }else{
                if(nums[i]==0 or nums[i]==j) dp[i][j]=((dp[i-1][j-1]+dp[i-1][j])%mod + dp[i-1][j+1])%mod;
                else dp[i][j]=0;
            }
        }
    }
    for(int i=1;i<=m;i++){
        result+=dp[n][i];
        result%=mod;
    }
return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin>>n>>m;
    vector<int> nums(n+1);
    for(int i=1;i<=n;i++){
        cin>>nums[i];
    }
    int result=countArrays(n,m,nums);
    cout<<result<<endl;

    return 0;
}
