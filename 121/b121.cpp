#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, x;

int bi_search(vector< pair<int, int> > a, int left, int right, int x){
	if(left<=right){
		int mid=(right+left)/2;
		if(a[mid].first==x) return a[mid].second;
		if(a[mid].first>x) return bi_search(a, left, mid-1, x);
		return bi_search(a, mid+1, right, x);
	}
	return -1;
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>x;
		vector<pair<int, int> > a;
		for(int i=0; i<n; ++i){
			int x; cin>>x; a.push_back({x,i});
		}
		sort(a.begin(), a.end());
		cout<<bi_search(a, 0, a.size()-1,x)<<endl;
	}
}

