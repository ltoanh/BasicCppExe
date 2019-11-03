#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define fin cin
#define fout cout
using namespace std;
int nCr(int n, int r){
	vector<int> C(r+1,0);
	C.at(0)=1;
	for(int i=1; i<=n; ++i){
		for(int j=min(i,r); j>0; --j){
			C.at(j)=(C.at(j)+C.at(j-1))%mod;
		}
	}
	return C.at(r);
}
int Lucas(int n, int r){
	if(r==0){
		return 1;
	}
	int ni=n%mod;
	int ri=r%mod;
	return (Lucas(n/mod, r/mod)*nCr(ni,ri))%mod;
}
main(){
	int t;
//	ifstream fin("34.txt", ios::in);
//	ofstream fout("34out.txt", ios::out);
	fin>>t;
	while(t--){
		int n, r;
		fin>>n>>r;
		cout<<nCr(n,r)<<endl;;
	}
}

