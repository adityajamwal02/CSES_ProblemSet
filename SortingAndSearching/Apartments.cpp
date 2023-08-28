/// CSES : Apartments

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long> nums(n), arr(m);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(nums.begin(),nums.end());
    sort(arr.begin(),arr.end());
    int i=0, j=0, counter=0;
    while(i<n and j<m){
        if((abs(arr[j]-nums[i])>k) and (nums[i]>arr[j])){
            j++;
        }else if((abs(arr[j]-nums[i])>k) and (nums[i]<arr[j])){
            i++;
        }else{
            counter++;
            i++;
            j++;
        }
    }
    cout<<counter<<endl;

    return 0;
}
