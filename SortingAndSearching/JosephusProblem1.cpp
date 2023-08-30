/// CSES : Josephus Problem 1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        nums[i]=i+1;
    }
    while(nums.size()>1){
        vector<int> nextSlot;
        for(int i=0;i<nums.size();i++){
            if(i%2==1){
                cout<<nums[i]<<" ";
            }else{
                nextSlot.push_back(nums[i]);
            }
        }
        if(nums.size()%2==0){
            nums=nextSlot;
        }else{
            int start=nextSlot.back();
            nextSlot.pop_back();
            nums.clear();
            nums.push_back(start);
            for(auto it : nextSlot){
                nums.push_back(it);
            }
        }
    }
    cout<<nums[0]<<endl;

    return 0;
}
