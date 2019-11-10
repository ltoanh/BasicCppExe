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
#define int long long
main(){
	int t, n;
//	ifstream fin("23.in", ios::in );
//	ofstream fout("23.out", ios::out );
	fin>>t;
	while(t--){
		fin>>n;
		int dem=0;
		int m=sqrt(n);
		/*sang nguyen to*/
		vector<bool> a(m+1, true);
		a.at(0)=false; a.at(1)=false;
		for(ll i=2; i*i<=m; ++i){
			if(a.at(i)){
				for(ll j=i*i; j<=m; j+=i){
					if(a.at(j)){
						a.at(j)=false;	
					}
				}
			}
		}
		for(ll i=2; i<=m; ++i){
			if(a.at(i)){ //neu i la snt
				if(i*i<=n){
//					cout<<i<<" ";
					dem++;
				}
				else{
					break;
				}
			}
		}
		fout<<dem<<endl;
	}
}

