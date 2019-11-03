#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n) for(int i=a; i<=n; ++i)
#define forn(i,a,n) for(int i=a; i<n; ++i)
#define bfor(i,a,n) for(int i=a; i>=n; --i)
#define nfor(i,a,n) for(int i=a; i>n; --i)
#define fin cin
#define fout cout
using namespace std;
bool snt(int x){
	forb(i,2,sqrt(x)){
		if(x%i==0) return 0;
	}
	return 1;
}
main(){
	int t, n;
//	ifstream fin("21.in", ios::in );
//	ofstream fout("21.out", ios::out );
	fin>>t;
	while(t--){
		fin>>n;
		forb(i,2,n){
			int tmp=sqrt(i);
			if(tmp*tmp==i && snt(tmp)) fout<<i<<" ";
		}
		fout<<endl;
	}
}

