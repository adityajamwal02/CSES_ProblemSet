/// CSES : Palindrome Reorder

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n=str.size();
    int oddFreq=0, evenFreq=0;
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[str[i]]++;
    }
    for(auto it : mp){
        if(it.second%2==0){
            evenFreq++;
        }else{
            oddFreq++;
        }
    }
    if(n%2==0){
        if(oddFreq>0) cout<<"NO SOLUTION"<<endl;
        else{
            string s1="", s2="";
            for(auto it : mp){
                char ch=it.first;
                int freq=it.second;
                while(freq!=0){
                    s1+=ch;
                    s2+=ch;
                    freq-=2;
                }
            }
            reverse(s2.begin(),s2.end());
        cout<<s1+s2<<endl;
        }
    }else{
        if(oddFreq!=1) cout<<"NO SOLUTION"<<endl;
        else{
            string s1="", s2="";
            char oddChar;
            for(auto it : mp){
                if(it.second%2==0){
                    char ch=it.first;
                    while(it.second!=0){
                        s1+=ch;
                        s2+=ch;
                        it.second-=2;
                    }
                }else{
                    oddChar=it.first;
                }
            }
            reverse(s2.begin(),s2.end());
            for(auto it : mp){
                if(it.first==oddChar){
                    while(it.second!=0){
                        s1+=it.first;
                        it.second--;
                    }
                }
            }
        cout<<s1+s2<<endl;
        }
    }

    return 0;
}
