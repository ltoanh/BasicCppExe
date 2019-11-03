#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool in(vector<int> c, int x){
	for(int i=0; i<c.size(); ++i){
		if(x==c[i]) return 1;
	}
	return 0;
}
main(){
	int n, m;
	vector<int> c;
	cin>>n>>m;
	for(int i=0; i<n; ++i){
		int x;
		cin>>x;
		c.push_back(x);
	}
	cout<<in(c,m);
}

