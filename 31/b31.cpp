#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll mu(long a, long b, long m){
	if(b==0) return 1%m;
	ll t=mu(a, b/2, m);
	if(b&1) return (t*t%m)*a%m;
	return (t*t)%m;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		long b, m;
		cin>>a>>b>>m;
		long a1=0;
		for(long i=0; i<a.size(); ++i){
			a1=(a1*10+a[i]-'0')%m;
		}
		cout<<mu(a1,b,m)<<endl;
	}
}

