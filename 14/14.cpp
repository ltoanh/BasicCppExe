#include<bits/stdc++.h>
#define ll long long
#define fin cin
#define fout cout
using namespace std;
main(){
	int t, n;
//	ifstream fin("14.in", ios::in );
//	ofstream fout("14.out", ios::out );
	fin>>t;
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
		int dem=0, sl=0;
		int m=n;
		//chu y test 8,27
		for(int i=2; i*i<=m; ++i){
			if(a.at(i)){
				if(n%i==0){
					while(n%i==0){
					n/=i;
					dem++;
					}
				sl++;	
				}
			}
		}
		cout<<((dem==3 && sl==3)?1:0)<<endl;
	}
}

