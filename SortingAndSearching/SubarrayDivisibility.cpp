#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    long long counter=0, curr=0;
    map<long long, long long> mp;
    mp[0]++;
    for(int i=0;i<n;i++){
        curr+=nums[i]%n;
        curr=(curr+n)%n;
        counter+=mp[curr];
        mp[curr]++;
    }
    cout<<counter<<endl;

    return 0;
}
