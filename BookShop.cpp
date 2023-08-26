/// CSES : Book Shop

#include<bits/stdc++.h>
using namespace std;

int countMaximumPages(int n, int target, vector<int> &price, vector<int> &book){
    vector<vector<int>> dp(n+1,vector<int>(target+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=target;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=price[i-1]){
                dp[i][j]=max(dp[i][j],dp[i-1][j-price[i-1]]+book[i-1]);
            }
        }
    }

return dp[n][target];
}

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> price(n), book(n);
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    for(int i=0;i<n;i++){
        cin>>book[i];
    }
    int result=countMaximumPages(n,x,price,book);
    cout<<result<<endl;

    return 0;
}
