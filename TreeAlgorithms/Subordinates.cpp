/// CSES : Subordinates

/// Idea : Constructing simple adj. to mark the child and maintaining array for computed roots (DP) : DP on Trees, dfs traversal for each children of current node
#include<bits/stdc++.h>
using namespace std;

vector<int> dp, vis;

void dfs(int node, vector<int> adj[]){
    int result=0;
    vis[node]=1;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,adj);
            result+=1+dp[it];
        }
    }
    dp[node]=result;
}

int main(){
    int n;
    cin>>n;
    vector<int> adj[n+1];
    int node=2;
    for(int i=0;i<n-1;i++){
        int child;
        cin>>child;
        adj[child].push_back(node);
        node++;
    }
    dp.resize(n+1,0);
    vis.resize(n+1,0);
    dfs(1,adj);
    for(int i=1;i<=n;i++){
        cout<<dp[i]<<" ";
    }

return 0;
}
