//time
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
	int t, a, m;
//	ifstream fin("27.in", ios::in);
//	ofstream fout("27.out", ios::out);
	fin>>t;
	while(t--){
		fin>>a>>m;
		int i=1;
		int temp;
		while((temp=m*i+1)%a){
			i++;
		}
		fout<<temp/a<<endl;
	}
}

