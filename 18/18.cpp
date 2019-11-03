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
	int t;
	ll n;
//	ifstream fin("18.in", ios::in );
//	ofstream fout("18.out", ios::out );
	fin>>t;
	while(t--){
		fin>>n;
		int s=1;
		forb(i,2,sqrt(n)){
			if(n%i==0){
				if(i==sqrt(n)){
					s+=i;
				}
				else{
					s+=i+n/i;
				}
			}
		}
//		cout<<s<<endl;
		if(s==n) fout<<1;
		else fout<<0;
		fout<<endl;
	}
}

