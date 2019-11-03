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
#define MAX 100007
bool check(int x, int a[], int n){
	int t=a[1]%x;
	forb(i,2,n,1){
		if(a[i]%x!=t) return 0;
	}
	return 1;
}
main(){
	int t, n;
//	ifstream fin("32.in", ios::in);
//	ofstream fout("32.out", ios::out);
	fin>>t;
	while(t--){
		fin>>n;
		int a[n];
		forb(i,1,n,1) fin>>a[i];
		sort(a+1,a+n+1);
		int m=a[n], dem=0;
		forb(i,1,m,1){
			if(check(i,a, n)) dem++;
		}
		fout<<dem<<endl;
	}
}

