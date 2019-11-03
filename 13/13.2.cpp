#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define fin cin
#define fout cout
main(){
	int t, n;
//	ifstream fin("13.in", ios:: in);
//	ofstream fout("13.2.txt", ios:: out);
	fin >> t;
	while(t--){
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
		for(int i=1; i<=n/2; ++i){
			if(a.at(i)){
				if(a.at(n-i)){
					cout<<i<<" "<<n-i;
					break;
				}
			}
		}
		cout<<endl;
	}
}

