//time
#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n) for(ll i=a; i<=n; ++i)
using namespace std;
#define fin cin
#define fout cout
main(){
	int t;
	ll n;
//	ifstream fin("18.in", ios::in );
//	ofstream fout("18.out", ios::out );
	fin>>t;
	while(t--){
		fin>>n;
		ll s=1;
		for(int i=2; i*i<=n; ++i){
			if(n%i==0){
				if(i*i==n){
					s+=i;
				}
				else{
					s+=i+n/i;
				}
			}
		}
		if(s==n) fout<<1;
		else fout<<0;
		fout<<endl;
	}
}

