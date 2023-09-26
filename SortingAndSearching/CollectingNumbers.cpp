/// CSES : Collecting Numbers

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, result=1;
    cin>>n;
    vector<int> arr(n),duplicate(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        duplicate[arr[i]]=i;
    }
    for(int i=1;i<n;i++){
        if(duplicate[i+1]<duplicate[i]) result++;
    }
    cout<<result<<endl;

    return 0;
}
