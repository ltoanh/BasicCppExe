#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n,x) for(int i=a; i<=n; i+=x)
#define forn(i,a,n,x) for(int i=a; i<n; i+=x)
#define bfor(i,a,n,x) for(int i=a; i>=n; i-=x)
#define nfor(i,a,n,x) for(int i=a; i>n; i-=x)
using namespace std;
#define fin cin
#define fout cout
main(){
	int t, n;
//	ifstream fin("44.in", ios::in );
//	ofstream fout("44.out", ios::out );
	fin>>t;
	while(t--){
		fin>>n;
		int a[n];
		forb(i,1,n,1) a[i]=0;	
		while(1){
			forb(i,1,n,1) cout<<a[i];
			int i=n;
			while(a[i]==1 && i>0){
				a[i]=0;
				i--;
			}
			if(i==0) break;
			else a[i]=1;
			cout<<" ";
		}
		cout<<endl;
	}
}

