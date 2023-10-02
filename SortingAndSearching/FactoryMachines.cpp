/// CSES : Factory Machines

#include<bits/stdc++.h>
using namespace std;

long long maxVal;

bool helper(long long n, long long t, vector<long long> &nums, long long mid){
    long long currTime=0;
    for(auto num : nums){
        currTime+=mid/num;
        if(currTime>=t) break;
    }
return currTime>=t;
}

long long findMinimumTime(long long n, long long t, vector<long long> &nums){
    long long low=0, high=maxVal*t+1, result=LLONG_MAX;
    while(low<=high){
        long long mid=low+(high-low)/2;
        if(helper(n,t,nums,mid)){
            result=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
return result;
}

signed main(){
    long long n, t;
    cin>>n>>t;
    vector<long long> nums(n);
    for(long long i=0;i<n;i++){
        cin>>nums[i];
        maxVal=max(maxVal,nums[i]);
    }
    long long result=findMinimumTime(n,t,nums);
    cout<<result<<endl;

    return 0;
}
