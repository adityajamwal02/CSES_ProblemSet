/// CSES : Ferris Wheel

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, x;
    cin>>n>>x;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int counter=0, i=0, j=n-1;
    while(i<=j){
        if((nums[j]+nums[i])>x){
            j--;
            counter++;
        }
        else{
            i++;
            j--;
            counter++;
        }
    }
    cout<<counter<<endl;
return 0;
}
