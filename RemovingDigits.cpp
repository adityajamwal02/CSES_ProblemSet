/// CSES : Removing Digits

#include<bits/stdc++.h>
using namespace std;

int extractMaxDigit(int num){
    string str=to_string(num);
    int result=(int)(str[0]-'0');
    //cout<<result;
    for(int i=1;i<str.size();i++){
        int currMax=(int)(str[i]-'0');
        if(result<currMax) result=currMax;
    }
return result;
}

int countSteps(int n){
    int counter=0;
    while(n!=0){
        counter++;
        int temp=extractMaxDigit(n);
        //cout<<n<<endl;
        n=n-temp;
    }
return counter;
}

int main(){
    int n;
    cin>>n;
    int result=countSteps(n);
    cout<<result<<endl;

    return 0;
}
