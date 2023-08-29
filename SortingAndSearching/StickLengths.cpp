/// CSES : Stick Lengths

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, counter=0;
    cin>>n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    if(n%2!=0){
        long long median=nums[n/2];
        for(int i=0;i<n;i++){
            counter+=(abs(median-nums[i]));
        }
    }else{
        long long median=(nums[n/2]+nums[n/2-1])/2;
        for(int i=0;i<n;i++){
            counter+=(abs(median-nums[i]));
        }
    }
    cout<<counter<<endl;

    return 0;
}

