/// CSES : Tower Of Hanoi

#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, int from, int to, int aux) {
        if(n==0){
            return;
        }
        towerOfHanoi(n-1,from,aux,to);
        cout<<from<<" "<<to<<endl;
        towerOfHanoi(n-1,aux,to,from);
    }

int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    towerOfHanoi(n,1,3,2);

    return 0;
}
