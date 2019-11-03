#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n) for(int i=a; i<=n; ++i)
#define forn(i,a,n) for(int i=a; i<n; ++i)
#define bfor(i,a,n) for(int i=a; i>=n; --i)
#define nfor(i,a,n) for(int i=a; i>n; --i)
using namespace std;
#define cin fin
#define fout cout
main(){
	int t,n,m;
	ifstream fin("15.in", ios::in );
	ofstream fout("15.out", ios::out );
	cin>>t;
	while(t--){
		fin>>n>>m;
		ll s=0;
		forb(i,1,n) {
			int tmp=i;
			while(tmp%m==0){
				s++;
				tmp/=m;
			}
		}
		cout<<s<<endl;	
	}
}

