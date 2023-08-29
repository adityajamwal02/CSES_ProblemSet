/// CSES : Two Sets

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long totalSum=(n*(n+1))/2;
    if(totalSum%2==1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        vector<int> nums(n);
        set<int> st1, st2;
        for(int i=0;i<n;i++){
            nums[i]=i+1;
        }
        long long currSum=0, maxSum=totalSum/2;
        for(int i=n-1;i>=0;i--){
            if(currSum+nums[i]<=maxSum){
                st1.insert(nums[i]);
                currSum+=nums[i];
            }else if(currSum==maxSum){
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(st1.find(nums[i])==st1.end()){
                st2.insert(nums[i]);
            }
        }
        cout<<st1.size()<<endl;
        for(auto it : st1){
            cout<<it<<" ";
        }
        cout<<endl;
        cout<<st2.size()<<endl;
        for(auto it : st2){
            cout<<it<<" ";
        }
    }

    return 0;
}
