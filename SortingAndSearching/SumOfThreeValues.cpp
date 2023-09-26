/// CSES : Sum of 3 values

#include<bits/stdc++.h>
using namespace std;


vector<long long> threeSum(long long n, vector<pair<long long,int>> &nums, long long x){
    vector<long long> result;
    sort(nums.begin(),nums.end());
    for(long long i=0;i<n;i++){
        long long target=x-nums[i].first;
        long long low=i+1, high=n-1;
        while(low<high){
            if((nums[low].first+nums[high].first)==target){
                result.push_back(nums[i].second+1);
                result.push_back(nums[low].second+1);
                result.push_back(nums[high].second+1);
            return result;
            }else if((nums[low].first+nums[high].first)<target){
                low++;
            }else{
                high--;
            }
        }
    }
return result;
}

int main(){
    long long n,x;
    cin>>n>>x;
    vector<pair<long long,int>> nums;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        nums.push_back({a,i});

    }
    vector<long long> result=threeSum(n,nums,x);
    if(result.size()==0) cout<<"IMPOSSIBLE"<<endl;
    else{
        sort(result.begin(),result.end());
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
    }

    return 0;
}
