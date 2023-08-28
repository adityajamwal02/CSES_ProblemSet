/// CSES : Increasing Array

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    unsigned long long counter=0;
    for(int i=1;i<n;i++){
        if(nums[i]<nums[i-1]){
            counter+=(nums[i-1]-nums[i]);
            nums[i]=nums[i-1];
        }
    }
    cout<<counter<<endl;

    return 0;
}
