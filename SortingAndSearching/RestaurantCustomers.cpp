/// CSES : Restaurant Customers

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<pair<long long, int>> nums;
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        nums.push_back({a,1});
        nums.push_back({b,-1});
    }
    sort(nums.begin(),nums.end());
    int result=0, currCustomers=0;
    for(int i=0;i<nums.size();i++){
        currCustomers+=nums[i].second;
        result=max(result,currCustomers);
    }
    cout<<result<<endl;


    return 0;
}
