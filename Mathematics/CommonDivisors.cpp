/// CSES : Common Divisors

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> nums(1e6+1,0);
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        nums[x]++;
    }
    for(int i=1e6;i>=1;i--){
        int counter=0;
        for(int j=i;j<=1e6;j+=i){
            counter+=nums[j];
        }
        if(counter>1){
            cout<<i<<endl;
            return 0;
        }
    }
}
