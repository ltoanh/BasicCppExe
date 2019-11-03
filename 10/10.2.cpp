/*in ra tat ca so nguyen to <= N
2<=N<=10^4
Sang nguyen to*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define fin cin
#define fout cout
main(){
	int t;
//	ifstream fin("10.in", ios::in);
//	ofstream fout("10.2.txt", ios::out);
	fin>>t;
	while(t--){
		int n;
		fin>>n;
		vector<bool> a(n+1, true);
		a.at(0)=false; a.at(1)=false;
		for(int i=2; i*i<=n; ++i){
			if(a.at(i)){
				for(int j=i*i; j<=n; j+=i){
					a.at(j)=false;
				}
			}
		}
		for(int i=2; i<=n; ++i){
			if(a.at(i)){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}

