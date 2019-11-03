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
	int t, n;
	ifstream fin("13.in", ios:: in);
	ofstream fout("13.out", ios:: out);
	fin >> t;
	while(t--){
		fin >> n;
		forb(i,2,n){
			if(snt(i) && snt(n-i)){
				fout<<i<<" "<<n-i;
				break;
			}
		}
		fout<<endl;
	}
}

