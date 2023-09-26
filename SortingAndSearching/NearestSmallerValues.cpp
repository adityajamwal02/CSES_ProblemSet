/// CSES : Nearest Smaller Values

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    stack<pair<int,int>> st;
    vector<int> result;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        while(!st.empty() and st.top().first>=nums[i]){
            st.pop();
        }
        if(st.empty()){
            result.push_back(0);
        }else{
            result.push_back(st.top().second);
        }
    st.push({nums[i],i+1});
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
return 0;
}
