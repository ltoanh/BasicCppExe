#include<iostream>
#include<algorithm>
#include<fstream>
#define ll long long
#define fin cin
#define fout cout
using namespace std;

main(){
	int t;
	ll n, m;
//	ifstream fin("6.in", ios::in);
//	ofstream fout("6.2.txt", ios::out);
	fin >> t;
	while(t--){
		fin >> n >> m;
		ll c1=__gcd(n,m);
		ll c2=__gcd(n+1,m);
		fout << ((c1!=1 || c2!=1)?"No":"Yes") <<endl;
	}
}

