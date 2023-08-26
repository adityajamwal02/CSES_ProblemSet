/// CSES : Grid Paths

#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

long long helper(int i, int j, int n, vector<vector<char>> &grid, vector<vector<int>> &dp){
    if(i==0 and j==0) return 1;
    if(i>=0 and j>=0 and grid[i][j]=='*') return 0;
    if(i<0 or j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=(helper(i-1,j,n,grid,dp)%mod + helper(i,j-1,n,grid,dp)%mod)%mod;
}

long long countNumberOfPaths(int n, vector<vector<char>> &grid){
    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
return helper(n-1,n-1,n,grid,dp);
}

int main(){
    int n;
    cin>>n;
    vector<vector<char>> grid(n,vector<char>(n,'.'));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    if(grid[0][0]=='*' or grid[n-1][n-1]=='*'){
        cout<<0<<endl;
    }else{
        long long result=countNumberOfPaths(n,grid);
        cout<<result<<endl;
    }
return 0;
}
