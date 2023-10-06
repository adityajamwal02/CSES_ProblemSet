/// CSES : Reading Books

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> nums(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        sum+=nums[i];
    }
    long long maxVal=*max_element(nums.begin(),nums.end());
    cout<<max(2*maxVal,sum)<<endl;

    return 0;
}
