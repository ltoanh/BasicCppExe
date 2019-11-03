#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n,x) for(int i=a; i<=n; i+=x)
#define forn(i,a,n,x) for(int i=a; i<n; i+=x)
#define bfor(i,a,n,x) for(int i=a; i>=n; i-=x)
#define nfor(i,a,n,x) for(int i=a; i>n; i-=x)
#define fin cin
#define fout cout
using namespace std;
bool fibo(int x){
	int t=sqrt(x);
	return (t*t==x);
}
bool check(int n){
	return (fibo(5*n*n-4) || fibo(5*n*n+4));
}
main(){
	int t;
//	ifstream fin("43.in", ios::in);
//	ofstream fout("43.out", ios::out);
	fin>>t;
	while(t--){
		int n, a[107];
		fin>>n;
		for(int i=0; i<n; ++i){
			fin>>a[i];
		}
		for(int i=0; i<n; ++i){
			if(check(a[i]))
				fout<<a[i]<<" ";		
		}
		fout<<endl;
	}
}

