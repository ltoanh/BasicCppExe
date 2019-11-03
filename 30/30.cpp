#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n) for(int i=a; i<=n; ++i)
#define forn(i,a,n) for(int i=a; i<n; ++i)
#define bfor(i,a,n) for(int i=a; i>=n; --i)
#define nfor(i,a,n) for(int i=a; i>n; --i)
using namespace std;
#define fin cin
#define fout cout
inline ll xl(string n, ll m){
	ll a=0;
	forn(i,0,n.size()){
		a=a*10+n[i]-'0';
		a%=m;
	}
	return a;
}
main(){
	int t;
	ll m;
	string n;
//	ifstream fin("30.in", ios::in);
//	ofstream fout("30.out", ios::out);
	fin>>t;
	while(t--){
		fin>>n>>m;
		fout<<xl(n,m)<<endl;
	}
}

