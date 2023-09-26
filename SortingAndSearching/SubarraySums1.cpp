/// CSES : Subarray Sums 1

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, x;
    cin>>n>>x;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    long long counter=0, i=0, j=0, curr=0;
    while(j<n){
        curr+=nums[j];
        while(curr>x){
            curr-=nums[i++];
        }
    j++;
    if(curr==x) counter++;
    }
    cout<<counter<<endl;

    return 0;
}
