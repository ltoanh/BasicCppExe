#include<bits/stdc++.h>
#define ll long long
#define int ll
using namespace std;
vector<int> Map;
bool cmp(int a, int b){
	if(Map[a]){
		if(Map[b]) return Map[a]<Map[b];
		else return 1;
	}
	else{
		if(Map[b]) return 0;
		else return a<b;
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n, m, x;
		cin>>n>>m;
		vector<int> a(n+7);
		vector<int> b(m+7);
		Map.assign(1000007,0);
		for(int i=0; i<n; ++i){
			cin>>x; a.push_back(x);
		}
		for(int i=0; i<m; ++i){
			cin>>x; b.push_back(x);
			Map[x]=i+1;
		}
		sort(a.begin(), a.end(), cmp);
		for(int i=0; i<n; ++i) cout<<a[i]<<" ";
		cout<<endl;
	}
}

