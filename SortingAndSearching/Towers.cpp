/// CSES : Towers

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    multiset<int> towers;
    for(int i=0;i<n;i++){
        if(towers.size()==0){
            towers.insert(nums[i]);
        }else{
            auto iter=towers.upper_bound(nums[i]);
            if(iter==towers.end()){
                towers.insert(nums[i]);
            }else{
                towers.insert(nums[i]);
                towers.erase(iter);
            }
        }
    }
    cout<<towers.size()<<endl;

    return 0;
}
