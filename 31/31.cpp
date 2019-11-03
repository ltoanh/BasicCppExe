//time
#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n) for(int i=a; i<=n; ++i)
#define forn(i,a,n) for(int i=a; i<n; ++i)
#define bfor(i,a,n) for(int i=a; i>=n; --i)
#define nfor(i,a,n) for(int i=a; i>n; --i)
#define fin cin
#define fout cout
using namespace std;
inline ll reduce(string a, ll m){
	ll re=0;
	forn(i,0,a.size()){
		re=re*10+a[i]-'0';
		re %= m;
	}
	return re;
}
inline ll modul(string a, ll b, ll m){
	ll ans=reduce(a,m);
	ll mul=ans;
	ll mod=1;
	forn(i,1,b){
		ans=(ans*mul)%m;
	}
	return ans;
}
main(){
	int t;
	ll b, m;
	string a;
//	ifstream fin("31.in", ios::in);
//	ofstream fout("31.out", ios::out);
	fin>>t;
	while(t--){
		fin>>a>>b>>m;
		fout<<modul(a,b,m)<<endl;;
	}
}

