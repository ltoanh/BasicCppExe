#include<bits/stdc++.h>
#define ll long long
#define fin cin
#define fout cout
using namespace std;	
main(){
	int t;
	ll a, x, y;
//	ifstream fin("5.in", ios::in);
//	ofstream fout("5.out", ios::out);
	fin >> t;
	while(t--){
		fin >> a >> x >> y;
		ll len=__gcd(x,y);
		vector<ll> A(len,a);
		for(int i=0; i<len; ++i) fout << A[i];
		fout<<endl;
	}
}

