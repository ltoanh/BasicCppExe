#include<iostream>
#include<algorithm>
#include<fstream>
#include<math.h>
#define ll long long
#define fin cin
#define fout cout
using namespace std;
inline ll bcnn(ll x, ll y, ll z){
	ll tmp=__gcd(x,y);
	ll t=x/tmp*y;
	tmp=__gcd(t,z);
	t=t/tmp*z;
	return t;
}
main(){
	int t;
	ll x, y, z, n;
//	ifstream fin("7.in", ios::in);
//	ofstream fout("7.out", ios::out);
	fin >> t;
	while(t--){
		fin >> x >> y >> z >> n;
		ll tmp = bcnn(x,y,z);
		ll c=pow(10,n);
//		cout<<c<<endl;
		if(tmp >= c)	fout<<-1<<endl;
		else{
			ll d=pow(10,n-1);
			fout << tmp*(d/tmp+(d%tmp!=0?1:0)) <<endl;
		}
	}
}

