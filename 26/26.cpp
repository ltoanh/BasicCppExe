#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n) for(int i=a; i<=n; ++i)
#define forn(i,a,n) for(int i=a; i<n; ++i)
#define bfor(i,a,n) for(int i=a; i>=n; --i)
#define nfor(i,a,n) for(int i=a; i>n; --i)
using namespace std;

int modul(int a, int b, ll p){
	ll x=1, y=a;
	while(b>0){
		if(b%2==1){
			x=(x*y)%p;
		}
		y=(y*y)%p;
		b/=2;
	}
	return x%p;
}
main(){
	int t, a, b, p;
//	ifstream fin("26.in", ios::in );
//	ofstream fout("26.out", ios::out );
	cin>>t;
	while(t--){
		cin>>a>>b>>p;
		cout<<modul(a,b,p)<<endl;
	}
}

