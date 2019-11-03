/*pp sang so nguyen to*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define fin cin
main(){
	int t;
//	ifstream fin("2.in", ios::in);
//	ofstream fout("2.2out.txt", ios::out);
	fin>>t;
	while(t--){
		int n;
		fin>>n;
		vector<bool> a(n+1,true);
		vector<int> snt;
		a.at(0)=false; a.at(1)=false;
		for(int i=2; i*i<=n; ++i){
			if(a.at(i)){
				for(int j=i*i; j<=n; j+=i){
					a.at(j)=false;
				}
			}
		}
		for(int i = 2; i <= n; i++) {
	        if(a.at(i)){
	        	snt.push_back(i);	
			}
	    }
		ll bc=1;
		for(int i=0; i<snt.size(); ++i){
			int x = snt.at(i);
			while(x * snt.at(i) <= n)
			{
				x *= snt.at(i);
			}
			bc *= x;
		}
		cout<<bc<<endl;
	}
}	

