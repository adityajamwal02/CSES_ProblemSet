/// CSES : Counting Divisors

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        vector<int> totalPowers;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                int counter=0;
                while(num%i==0){
                    counter++;
                    num/=i;
                }
            totalPowers.push_back(counter);
            }
        }
        if(num!=1){
            totalPowers.push_back(1);
        }
        int result=1;
        for(auto it : totalPowers){
            result*=(it+1);
        }
    cout<<result<<endl;
    }
    return 0;
}
