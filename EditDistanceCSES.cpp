/// CSES : Edit Distance


#include<bits/stdc++.h>
using namespace std;

int editDistance(string &s1, string &s2, int n, int m){
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=0;i<=n;i++){
        dp[i][0]=i;
    }
    for(int i=0;i<=m;i++){
        dp[0][i]=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }else{
                dp[i][j]=1+min({dp[i-1][j-1],dp[i][j-1],dp[i-1][j]});
            }
        }
    }
return dp[n][m];
}

int main(){
    string str1, str2;
    cin>>str1>>str2;
    int n=str1.size(), m=str2.size();
    int result=editDistance(str1,str2,n,m);
    cout<<result<<endl;

return 0;
}
