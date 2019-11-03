#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define fin cin
#define fout cout
main(){
	int t;
//	ifstream fin("11.in", ios:: in);
//	ofstream fout("11.out", ios:: out);
	fin >> t;
	while(t--){
		int n;
		fin>>n;
		int snt[n+1]={0};
		snt[1]=1;
		vector<bool> a(n+1, true);
		a.at(0)=false;
		for(int i=2; i*i<=n; ++i){
			if(a.at(i)){
				snt[i]=i;
				for(int j=i*i; j<=n; j+=i){
					if(a.at(j)){
						a.at(j)=false;
						snt[j]=i;	
					}
				}
			}
		}
		for(int i=1; i<=n; ++i){
			if(a.at(i)){
				cout<<i<<" ";
			}
			else{
				cout<<snt[i]<<" ";	
			}
		}
		cout<<endl;
	}
}

