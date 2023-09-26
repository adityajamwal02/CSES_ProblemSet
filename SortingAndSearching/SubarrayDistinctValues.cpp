/// CSES : Subarray Distinct Values

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin>>n>>k;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    unordered_map<long long,long long> mp;
    long long i=0, j=0, counter=0;
    while(j<n){
        mp[nums[j]]++;
        while(mp.size()>k){
            mp[nums[i]]--;
            if(mp[nums[i]]==0) mp.erase(nums[i]);
        i++;
        }
    counter+=(j-i+1);
    j++;

    }
    cout<<counter<<endl;

    return 0;
}
