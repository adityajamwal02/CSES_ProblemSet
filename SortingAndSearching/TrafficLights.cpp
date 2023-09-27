/// CSES : Traffic Lights

#include<bits/stdc++.h>
using namespace std;

vector<int> trafficLights(int n, int x, vector<int> &pos){
	set<int> lights;
	multiset<int> distance;
	lights.insert(0);
	lights.insert(x);
	distance.insert(x);
	vector<int> result;
	for(int i=0;i<n;i++){
		int p=pos[i];
		auto greaterPos=lights.upper_bound(p);
		auto smallerPos=greaterPos;
		smallerPos--;
		distance.erase(distance.find(*greaterPos-*smallerPos));
		distance.insert(p-*smallerPos);
		distance.insert(*greaterPos-p);
		lights.insert(p);
		auto ans=distance.end();
		ans--;
		result.push_back(*ans);
	}
return result;
}

int main(){
    int x,n;
    cin>>x>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> result=trafficLights(n,x,nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}
