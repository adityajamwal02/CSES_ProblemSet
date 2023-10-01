/// CSES : Number Spiral

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long i,j;    // row x, column y
        cin>>i>>j;
        if(i>=j){
            if(i%2==0){
                cout<<(i-1)*(i-1)+(i-j)+i<<endl;
            }else{
                cout<<(i-1)*(i-1)+j<<endl;
            }
        }else{
            if(j%2==0){
                cout<<(j-1)*(j-1)+i<<endl;
            }else{
                cout<<(j-1)*(j-1)+j+(j-i)<<endl;
            }
        }
    }
return 0;
}
