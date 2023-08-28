/// CSES : Weird Algorithm

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long> result;
    while(n!=1){
        result.push_back(n);
        if(n%2==0) n/=2;
        else n=(n*3 + 1);
    }
    result.push_back(1);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
