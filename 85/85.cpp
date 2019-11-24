/*
Subarray Contiguous largest sum
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int find_max(vector<int> a){
	int current_max, Max;
	current_max=Max=a.at(0);
	for(int i=1; i<a.size(); ++i){
		current_max=max(a.at(i), current_max+a.at(i));
		Max=max(Max, current_max);
	}
	for(int i=0; i<a.size(); ++i){
		if(a.at(i)>Max){
			Max=a.at(i);
		}
	}
	return Max;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		vector<int> a;
		cin>>n;
		for(int i=0; i<n; ++i){
			int x;
			cin>>x;
			a.push_back(x);
		}
		cout<<find_max(a)<<endl;
	}
}

