/// CSES : Money Sums

#include<bits/stdc++.h>
using namespace std;

int denominations(int n, vector<int> &nums, set<int> &st){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=nums[i]+nums[j];
            st.insert(sum);
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<bool>> dp(101,vector<bool>(100001,false));    // N x MaximumTotalSum
    dp[0][0]=true;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=100000;j++){     // j -> currSum (0 to MaxTotalSum)
            dp[i][j]=dp[i-1][j];
            int prevSum=j-nums[i-1];
            if(prevSum>=0 and dp[i-1][prevSum]){
                dp[i][j]=true;
            }
        }
    }
    vector<int> result;
    for(int i=1;i<=100000;i++){     // Checking last row, each column for presence or not (i->sum)
        if(dp[n][i]){
            result.push_back(i);
        }
    }
    cout<<result.size()<<endl;
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}
