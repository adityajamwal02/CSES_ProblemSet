/// CSES : Dice Combinations

#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int countCombinations(int target){
    vector<int> dp(1000001,0);
    dp[0]=1;
    for(int i=1;i<=target;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                dp[i]+=dp[i-j];
                dp[i]%=mod;
            }
        }
    }
return dp[target];
}

int main(){
    int n;
    cin>>n;
    int result=countCombinations(n);
    cout<<result<<endl;
return 0;
}
