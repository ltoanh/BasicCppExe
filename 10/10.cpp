#include<bits/stdc++.h>
#define ll long long
#define forb(a,n) for(int i=a; i<=n; ++i)
#define forn(a,n) for(int i=a; i<n; ++i)
#define bfor(a,n) for(int i=a; i>=n; --i)
#define nfor(a,n) for(int i=a; i>n; --i)
using namespace std;
bool snt(ll x){
	forb(2,sqrt(x)){
		if(x%i==0) return 0;
	}
	return 1;
}
main(){
	int t, n;
	ifstream fin("10.in", ios:: in);
	ofstream fout("10.out", ios:: out);
	fin >> t;
	while(t--){
		fin >> n;
		forb(2,n){
			if(snt(i)) fout<<i<<" ";
		}
		fout<<endl;
	}
}

