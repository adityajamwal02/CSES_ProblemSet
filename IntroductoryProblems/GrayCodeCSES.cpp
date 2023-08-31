/// CSES : Gray Code

#include<bits/stdc++.h>
using namespace std;

vector<string> grayCode(int n){
    vector<string> curr;
    if(n==1){
        curr.push_back("0");
        curr.push_back("1");
        return curr;
    }
    vector<string> prev=grayCode(n-1);
    for(int i=0;i<(int)prev.size();i++){
        string s;
        s+='0';
        s+=prev[i];
        curr.push_back(s);
    }
    for(int j=(int)prev.size()-1;j>=0;j--){
        string s;
        s+='1';
        s+=prev[j];
        curr.push_back(s);
    }
return curr;
}

int main(){
    int n;
    cin>>n;
    vector<string> result=grayCode(n);
    for(auto str : result){
        cout<<str<<endl;
    }

    return 0;
}
