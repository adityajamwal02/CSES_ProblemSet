/// CSES : Two Knights

#include<bits/stdc++.h>
using namespace std;

unsigned long long countWays(long long num){
    // Generate all possibilities and remove those when knights attack
    // All possibilities => xCr where x=>NxN (matrix)
    unsigned long long totalPossible=((num*num)*(num*num - 1))/2;
    // Attacking counts makes L shaped (1,2) types : At any point, 8 fields but considering both can attack,
    // Removing duplicates, 8/2 => 4*(num-1)*(num-2)
    unsigned long long attackingCount=4*(num-1)*(num-2);

return totalPossible-attackingCount;
}

int main(){
    int n;
    cin>>n;
    cout<<0<<endl;
    for(long long i=2;i<=n;i++){
        unsigned long long result=countWays(i);
        cout<<result<<endl;
    }

    return 0;
}
