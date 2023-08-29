/// CSES : Maximum Subarray Sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    long long maxSum=INT_MIN, currSum=0;
    for(int i=0;i<n;i++){
        currSum+=nums[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum<<endl;

    return 0;
}


