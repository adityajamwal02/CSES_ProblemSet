/// CSES : Movie Festivals

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<long long,long long>> movies(n);
    for(int i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        movies[i]={a,b};
    }
    sort(movies.begin(),movies.end(),[&](pair<long long,long long> a, pair<long long,long long> b){
        return a.second<b.second;
    });
    int prev=-1, counter=0;
    for(int i=0;i<n;i++){
        if(movies[i].first>=prev){
            counter++;
            prev=movies[i].second;
        }
    }
    cout<<counter<<endl;

    return 0;
}
