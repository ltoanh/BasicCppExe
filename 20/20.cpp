#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n) for(int i=a; i<=n; ++i)
#define forn(i,a,n) for(int i=a; i<n; ++i)
#define bfor(i,a,n) for(int i=a; i>=n; --i)
#define nfor(i,a,n) for(int i=a; i>n; --i)
using namespace std;

main(){
	int t, n;
	ifstream fin("20.in", ios::in );
	ofstream fout("20.out", ios::out );
	fin>>t;
	while(t--){
		fin>>n;
		int dem=0;
		for(int i=1; i<=n; i+=2){
			if(n%i==0) dem++;
		}
		fout<<dem<<endl;
	}
}

