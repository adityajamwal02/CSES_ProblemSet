/// CSES: Prufer Code

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> pruferCode(n-2);
    map<int,int> freq;
    for(int i=0;i<n-2;i++){
        cin>>pruferCode[i];
        freq[pruferCode[i]]++;
    }
    set<int> leaf;
    for(int i=1;i<=n;i++){
        if(freq[i]==0) leaf.insert(i);
    }
    for(int i=0;i<n-2;i++){
        auto it=*leaf.begin();
        leaf.erase(it);
        cout<<it<<" "<<pruferCode[i]<<endl;
        freq[pruferCode[i]]--;
        if(freq[pruferCode[i]]==0) leaf.insert(pruferCode[i]);
    }
    cout<<*leaf.begin()<<" "<<*leaf.rbegin()<<endl;

    return 0;
}
