/// CSES : Missing Coin Sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    long long currSum=0;
    for(int i=0;i<n;i++){
        if(currSum+1<nums[i]){
            break;
        }
        currSum+=nums[i];
    }
    cout<<currSum+1<<endl;

    return 0;
}
