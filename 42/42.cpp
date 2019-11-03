//wr
#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n,x) for(int i=a; i<=n; i+=x)
#define forn(i,a,n,x) for(int i=a; i<n; i+=x)
#define bfor(i,a,n,x) for(int i=a; i>=n; i-=x)
#define nfor(i,a,n,x) for(int i=a; i>n; i-=x)
#define fin cin
#define fout cout
using namespace std;
bool check(ll x)
{
	ll  s=sqrt(x);
	return (s*s == x);
}
bool fibo(ll n)
{
	return check(5*n*n+4) || check(5*n*n-4);
}
main()
{
	int t;
	ll n;
//	ifstream fin("42.in", ios::in);
//	ofstream fout("42.out", ios::out);
	fin>>t;
	while(t--){
		fin>>n;
		fout<<(fibo(n)?"Yes":"No")<<endl;
	}
}

