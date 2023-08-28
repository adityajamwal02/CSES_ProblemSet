/// CSES : Repetitions

#include<bits/stdc++.h>
using namespace std;

int longestRepetition(int n, string &str){
    int maxVal=INT_MIN, currMax=1;
    for(int i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
            currMax++;
            if(currMax>maxVal){
                maxVal=currMax;
            }
        }else{
            currMax=1;
        }
    }
return maxVal==INT_MIN ? 1 : maxVal;
}

int main(){
    string str;
    cin>>str;
    int n=str.size();
    int result=longestRepetition(n,str);
    cout<<result<<endl;

    return 0;
}
