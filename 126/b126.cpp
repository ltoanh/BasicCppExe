#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n1, n2, n3;

main(){
	cin>>t;
	while(t--){
		cin>>n1>>n2>>n3;
		set<ll> s1, s2;
		for(int i=0; i<n1; ++i){
			int x; cin>>x;
			s1.insert(x);
		}
		for(int i=0; i<n2; ++i){
			int x; cin>>x;
			s2.insert(x);
		}
		for(int i=0; i<n3; ++i){
			int x; cin>>x;
			if(s1.find(x)!=s1.end() && s2.find(x)!=s2.end())
				cout<<x<<" ";
		}
		cout<<endl;
	}
}

