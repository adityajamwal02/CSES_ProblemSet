/// CSES : Coins Piles

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        if(a==0 and b==0) cout<<"YES"<<endl;
        else if(max(a,b)>2*min(a,b)) cout<<"NO"<<endl;
        else if((a+b)%3==0 and a>0 and b>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
