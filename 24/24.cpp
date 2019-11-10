#include<bits/stdc++.h>
#define ll long long
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
		ll m=sqrt(r);
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
		for(ll i=l; i<=m; ++i){
			if(a.at(i)){
				if(i*i<=r){
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

