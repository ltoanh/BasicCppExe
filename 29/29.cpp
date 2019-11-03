#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n) for(int i=a; i<=n; ++i)
#define forn(i,a,n) for(int i=a; i<n; ++i)
#define bfor(i,a,n) for(int i=a; i>=n; --i)
#define nfor(i,a,n) for(int i=a; i>n; --i)
using namespace std;
#define fin cin
#define fout cout
main(){
	int t, n;
	ll k;
//	ifstream fin("29.in", ios::in);
//	ofstream fout("29.out", ios::out);
	fin>>t;
	while(t--){
		fin>>n>>k;
		int ans=0;
		int x=n/k;
		int y=n%k;
		ans=x*(k*(k+1))/2+y*(y+1)/2;
		fout<<(ans!=k?0:1)<<endl;
	}
}

