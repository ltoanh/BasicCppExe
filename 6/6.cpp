//ac
#include<iostream>
#include<algorithm>
#include<fstream>
#define ll long long
using namespace std;
#define fin cin
#define fout cout
bool check(ll n, ll m){
	ll sum=n*(n+1)/2;
	ll s1=(sum+m)/2;
	ll s2=sum-s1;
	if(sum<m){
		return 0;
	}
	if(s1-s2==m){
		return (__gcd(s1,s2)==1);
	}
	return 0;
}
main(){
	int t;
	ll n, m;
	fin >> t;
	while(t--){
		fin >> n >> m;
		ll sum = 0;
		fout << (check(n,m)!=1?"No":"Yes") <<endl;
	}
}

