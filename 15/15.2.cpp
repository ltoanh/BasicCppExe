#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define fin cin
#define fout cout
main(){
	int t,n,m;
//	ifstream fin("15.in", ios::in );
//	ofstream fout("15.2.txt", ios::out );
	fin>>t;
	while(t--){
		fin>>n>>m;
		int s=0;
		while(n){
			n/=m;
			s+=n;
		}
		cout<<s<<endl;
	}
}
