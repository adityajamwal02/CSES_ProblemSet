/// CSES : Creating strings

#include<bits/stdc++.h>
using namespace std;

long long factorial(int num){
    if(num==0 or num==1) return 1;

return num*factorial(num-1);
}

int main(){
    string str;
    cin>>str;
    int n=str.size();
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[str[i]]++;
    }
    long long numerator=factorial(n);
    long long denominator=1;
    for(auto it : mp){
        long long curr=factorial(it.second);
        denominator*=(curr);
    }
    cout<<numerator/denominator<<endl;
    sort(str.begin(),str.end());
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));

    return 0;
}
