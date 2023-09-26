/// CSES : Sum of 3 values

#include<bits/stdc++.h>
using namespace std;

vector<long long> fourSum(long long n, vector<pair<long long,int>> &nums, long long x){
    vector<long long> result;
    sort(nums.begin(),nums.end());
    for(long long i=0;i<n;i++){
        long long target1=x-nums[i].first;
        for(long long j=i+1;j<n;j++){
            long long target2=target1-nums[j].first;
            long long low=j+1, high=n-1;
            while(low<high){
                if((nums[low].first+nums[high].first)==target2){
                    result.push_back(nums[i].second);
                    result.push_back(nums[j].second);
                    result.push_back(nums[low].second);
                    result.push_back(nums[high].second);
                return result;
                }else if((nums[low].first+nums[high].first)<target2){
                    low++;
                }else{
                    high--;
                }
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
        nums.push_back({a,i+1});

    }
    vector<long long> result=fourSum(n,nums,x);
    if(result.size()==0) cout<<"IMPOSSIBLE"<<endl;
    else{
        sort(result.begin(),result.end());
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
    }

    return 0;
}

