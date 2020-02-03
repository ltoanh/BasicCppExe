#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, k;

main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<int> a;
		for(int i=0; i<n; ++i){
			int x; cin>>x; a.push_back(x);
		}
		sort(a.begin(), a.end());
		int count=0;
		for(int i=0; i<n; ++i){
			int x=lower_bound(a.begin(), a.end(), k+a[i])-a.begin()-1;
			count+=max(0, x-i);
		}
		cout<<count<<endl;
	}
}

