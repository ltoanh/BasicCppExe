#include<bits/stdc++.h>
#define ll long long
#define int long long
#define mod 1000000007
#define fin cin
#define fout cout
using namespace std;

int ucln(int a[], int n){
	int uc=a[1];
	for(int i=2; i<=n; ++i){
		uc=__gcd(a[i],uc);
	}
	return uc;
}
int mu(int x, int y){
	if(y==0){
		return 1;
	}
	int t=mu(x,y/2);
	if(y&1){
		return ((t*t)%mod)*x%mod;
	}
	else{		
		return (t*t)%mod;
	}
}
int tinh(int uc, int a[], int n){
	ll mul=1;
	for(int i=1; i<=n; ++i){
		mul=(mul*mu(a[i],uc))%mod;
	}
	return mul;
}
main(){
	int t;
//	ifstream fin("3.in", ios::in);
//	ofstream fout("3.out", ios::out);
	fin>>t;
	while(t--){
		int n, a[100];
		fin>>n;
		for(int i=1; i<=n; ++i){
			fin>>a[i];
		}
		int uc=ucln(a,n);
		int gt=tinh(uc,a,n);
		cout<<gt<<endl;
	}
}

