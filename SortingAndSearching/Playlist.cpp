/// CSES : Playlist

#include<bits/stdc++.h>
using namespace std;

long long getMaxUniqueElements(int n, vector<long long> &nums){
    long long result=0, i=0, j=0;
    set<long long> st;
    while(i<n and j<n){
        while(j<n and !st.count(nums[j])){
            st.insert(nums[j]);
            result=max(result,j-i+1);
            j++;
        }
        while(j<n and st.count(nums[j])){
            st.erase(nums[i]);
            i++;
        }
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int n;
    cin>>n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    long long result=getMaxUniqueElements(n,nums);
    cout<<result<<endl;
    return 0;
}
