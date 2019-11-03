#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n) for(ll i=a; i<=n; ++i)
#define forn(i,a,n) for(ll i=a; i<n; ++i)
#define bfor(i,a,n) for(ll i=a; i>=n; --i)
#define nfor(i,a,n) for(ll i=a; i>n; --i)
#define fin cin
#define fout cout
using namespace std;
main(){
	int t;
	ll l,r;
//	ifstream fin("24.in", ios::in );
//	ofstream fout("24.out", ios::out );
	fin>>t;
	while(t--){
		fin>>l>>r;
		ll dem=0;
		vector<bool> a(r+1, true);
		a.at(0)=false; a.at(1)=false;
		for(ll i=2; i*i<=r; ++i){
			if(a.at(i)){
				for(ll j=i*i; j<=r; j+=i){
					a.at(j)=false;	
				}
			}
		}
		for(ll i=l; i<=r; ++i){
			if(a.at(i)){
				if(i*i<=r){
					dem++;	
				}
			}
		}
		fout<<dem<<endl;
	}
}

