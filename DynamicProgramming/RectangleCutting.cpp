/// CSES : Rectangle Cutting

#include<bits/stdc++.h>
using namespace std;

int minMovesToCutRectangle(int n, int m){
    vector<vector<int>> dp(n+1,vector<int>(m+1,INT_MAX));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==j) dp[i][j]=0;
            else{
                for(int k=1;k<=j-1;k++){
                    dp[i][j]=min(dp[i][j],1+dp[i][k]+dp[i][j-k]);
                }
                for(int k=1;k<=i-1;k++){
                    dp[i][j]=min(dp[i][j],1+dp[k][j]+dp[i-k][j]);
                }
            }
        }
    }
return dp[n][m];
}

int main(){
    int a, b;
    cin>>a>>b;
    int result=minMovesToCutRectangle(a,b);
    cout<<result<<endl;

    return 0;
}
