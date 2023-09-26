/// CSES : Subarray Sums 2

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long currSum=0, counter=0;
    map<long long, int> mp;
    mp[0]++;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        counter+=mp[currSum-x];
        mp[currSum]++;
    }
    cout<<counter<<endl;

    return 0;
}
