//time
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
	int t, b, p;
//	ifstream fin("33.in", ios::in);
//	ofstream fout("33.out", ios::out);
	fin>>t;
	while(t--){
		fin>>b>>p;
//		cout<<b<<" "<<p<<endl;
		int dem=0, mul=0, t;
		while((t=p*mul+1)<=b*b){
			int t1=sqrt(t);
			if(t1*t1==t){
				dem++;
			}
			mul++; 
		}	
		fout<<dem<<endl;
	}
}

