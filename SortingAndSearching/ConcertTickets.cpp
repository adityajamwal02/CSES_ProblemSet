/// CSES : Concert Tickets

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> h(n), t(m);
    set<pair<int,int>> st;
    for(int i=0;i<n;i++){
        cin>>h[i];
        st.insert({h[i],i});
    }
    for(int i=0;i<m;i++){
        cin>>t[i];
    }
    for(int i=0;i<m;i++){
        auto it=st.lower_bound({t[i]+1,0});
        if(it==st.begin()){
            cout<<-1<<endl;
        }else{
            it--;
            cout<<(*it).first<<endl;
            st.erase(it);
        }
    }

    return 0;
}
