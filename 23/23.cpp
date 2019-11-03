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

main(){
	int t, n;
//	ifstream fin("23.in", ios::in );
//	ofstream fout("23.out", ios::out );
	fin>>t;
	while(t--){
		fin>>n;
		int dem=0;
		vector<bool> a(n+1, true);
		vector<int> b;
		a.at(0)=false; a.at(1)=false;
		for(int i=2; i*i<=n; ++i){
			if(a.at(i)){
				b.push_back(i);
				for(int j=i*i; j<=n; j+=i){
					if(a.at(j)){
						a.at(j)=false;	
					}
				}
			}
		}
		for(int i=0; i<b.size(); ++i){
			if(b.at(i)*b.at(i)<=n){
				dem++;
			}
		}
		fout<<dem<<endl;
	}
}

