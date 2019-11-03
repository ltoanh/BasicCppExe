#include<bits/stdc++.h>
#define ll long long
#define fin cin
#define fout cout
using namespace std;
ll mod(ll a, ll b, ll c){
	if(a==0 || b==0){
		return 0;
	}
	ll t=mod(a,b/2,c);
	if(b&1){
		return (a%c+2*(t%c))%c;
	}
	return (2*(t%c))%c;
}
main(){
	int t;
//	ifstream fin("36.txt", ios::in);
//	ofstream fout("36out.txt", ios::out);
	fin>>t;
	while(t--){
		ll a, b, c;
		fin>>a>>b>>c;
		cout<<mod(a,b,c)<<endl;
	}
}

