#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n) for(int i=a; i<=n; ++i)
#define forn(i,a,n) for(int i=a; i<n; ++i)
#define bfor(i,a,n) for(int i=a; i>=n; --i)
#define nfor(i,a,n) for(int i=a; i>n; --i)
using namespace std;
bool snt(ll x){
	if(x<2) return 0;
	forb(i,2,sqrt(x)){
		if(x%i==0) return 0;
	}
	return 1;
}
main(){
	int t, m, n;
	ifstream fin("12.in", ios:: in);
	ofstream fout("12.out", ios:: out);
	fin >> t;
	while(t--){
		fin >> m >> n;
		forb(i,m,n){
			if(snt(i)) fout<<i<<" ";
		}
		fout<<endl;
	}
}

