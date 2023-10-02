/// CSES : Tree Diameter

#include<bits/stdc++.h>
using namespace std;

vector<int> adj[200005];
vector<vector<int>> dp(200005,vector<int>(2));
int diameter=0;

bool isLeaf(int node){
    if(node!=1 and adj[node].size()==1) return true;

return false;
}

void treeDiameter(int node, int parent){
    vector<int> child;
    if(isLeaf(node)){
        dp[node][0]=dp[node][1]=0;
    return;
    }

    for(auto it : adj[node]){
        if(it!=parent){
            treeDiameter(it,node);
            child.push_back(dp[it][0]);
        }
    }
    sort(child.rbegin(),child.rend());
    if(child.size()==1){
        dp[node][0]=1+child[0];
        dp[node][1]=0;
    }else{
        dp[node][0]=1+child[0];
        dp[node][1]=(1+child[0])+(1+child[1]);
    }
    diameter=max(diameter,max(dp[node][0],dp[node][1]));
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
    return 0;
    }

    int u,v;
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    treeDiameter(1,-1);
    cout<<diameter<<endl;

return 0;
}
