/// CSES : Trailing Zeroes

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n<5) cout<<0<<endl;
    else{
        int result=0;
        for(int i=5;i<=n;i*=5){
            result+=(n/i);
        }
        cout<<result;
    }
return 0;
}
