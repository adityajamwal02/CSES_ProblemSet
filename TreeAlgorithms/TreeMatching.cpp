/// CSES : Tree Matching

/// Idea : DP on Trees : Take/ notTake for every neighbours at each level from root

#include<bits/stdc++.h>
using namespace std;

int dp[200001][2];

int helper(int node, bool include, vector<int> adj[], int parent){
    if(dp[node][include]!=-1) return dp[node][include];
    if(include){
        int result=0,ans=0;
        for(auto it : adj[node]){
            if(it!=parent){
                result+=helper(it,1,adj,node);
            }
        }
        for(auto it : adj[node]){
            if(it!=parent){
                ans=max(ans,result-dp[it][1]+1+helper(it,0,adj,node));
            }
        }
        dp[node][include]=ans;
    return ans;
    }else{
        int result=0;
        for(auto it : adj[node]){
            if(it!=parent){
                result+=helper(it,1,adj,node);
            }
        }
        dp[node][include]=result;
    return result;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> adj[n+1];
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(dp,-1,sizeof(dp));
    int result=max(helper(1,0,adj,-1),helper(1,1,adj,-1));
    cout<<result<<endl;

    return 0;
}
