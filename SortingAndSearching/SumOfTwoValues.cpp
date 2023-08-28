/// CSES : Sum of Two Values

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,x;
    cin>>n>>x;
    vector<pair<long long,int>> nums(n);
    for(int i=0;i<n;i++){
        long long curr;
        cin>>curr;
        nums[i]={curr,i+1};
    }
    sort(nums.begin(),nums.end());
    int i=0, j=n-1, flag=0;
    while(i<j){
        if((nums[i].first+nums[j].first)==x){
            cout<<nums[i].second<<" "<<nums[j].second;
            flag=1;
            break;
        }else if((nums[i].first+nums[j].first)>x){
            j--;
        }else{
            i++;
        }
    }
    if(flag==0) cout<<"IMPOSSIBLE"<<endl;

    return 0;
}

