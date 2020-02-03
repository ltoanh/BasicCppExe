#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<bool> a(n,false);
		for(int i=0; i<n; ++i){
			ll x; cin>>x;
			if(x>=0 && x<n) a[x]=true;
		}
		for(int i=0; i<n; ++i){
			cout<<(a[i]?i:-1)<<" ";
		}
		cout<<endl;
	}
}

