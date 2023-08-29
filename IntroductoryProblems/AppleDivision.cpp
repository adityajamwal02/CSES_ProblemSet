/// CSES : Apple Division

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> nums(n);
    long long totalSum=0, result=LONG_LONG_MAX;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        totalSum+=nums[i];
    }
    for(int i=1;i<(1<<n);i++){
        long long curr=0;
        for(int j=0;j<n;j++){
            if((1<<j)&i) curr+=nums[j];
        }
        result=min(result,abs(totalSum-2*curr));
    }
    cout<<result<<endl;

    return 0;
}
