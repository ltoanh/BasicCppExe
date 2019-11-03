#include<bits/stdc++.h>
#define ll long long
#define fout cout
#define fin cin
using namespace std;
ll gcd(int x, int y){
	while(x!=y){
		if(x>y){
			x-=y;
		}
		else{
			y-=x;
		}
	}
	return x;
}
main(){
	int t, a, b;
//	ifstream fin("1.in", ios::in);
//	ofstream fout("1.out", ios::out);
	fin>>t;
	while(t--){
		fin>>a>>b;
		ll ucln=gcd(a,b);
		ll bcnn=a/ucln*b;
		fout<<bcnn<<" "<<ucln<<endl;
	}
}

