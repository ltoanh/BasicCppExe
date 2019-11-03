#include<iostream>
#include<string>
#include<fstream>
#define ll long long
#define fin cin
#define fout cout
using namespace std;
inline ll gcd(ll a, ll b){
	if(!a)
		return b;
	return gcd(b%a, a);
}
inline ll reduce(ll a, string b){
	ll mod=0;
	for(int i=0; i<b.size(); ++i){
		mod=(mod*10+b[i]-'0')%a;
	}
	return mod;
}
inline ll gcd_large(ll a, string b){
	ll num=reduce(a,b);
	return gcd(num,a);
}
main(){	
//	fstream fin;
//	fin.open("4in.txt", ios::in);
//	ifstream fin("4in.txt", ios::in);
//	ofstream fout("4out.txt", ios::out);
	int t;
	long long a;
	string b;
 	fin>>t;
	while(t--){
		fin>>a>>b;
		fout<<gcd_large(a,b);
		fout<<endl;
	}
}

