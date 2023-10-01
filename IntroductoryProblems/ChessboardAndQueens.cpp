/// CSES : Chessboard and Queens


#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
int counter=0;
bool rows[8], leftD[16], rightD[16];

void solve(char grid[8][8], int i){
    if(i==8){
        counter++;
        return;
    }
    for(int j=0;j<8;j++){
        if(grid[i][j]=='.'){
            if(!rows[j] and !leftD[i-j+8-1] and !rightD[i+j]){
                rows[j]=leftD[i-j+8-1]=rightD[i+j]=true;
                solve(grid,i+1);
                rows[j]=leftD[i-j+8-1]=rightD[i+j]=false;
            }
        }
    }
}

int main(){
    char grid[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>grid[i][j];
        }
    }
    solve(grid,0);
    cout<<counter<<endl;

    return 0;
}
