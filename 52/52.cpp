#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define fin cin
#define fout cout
main(){
	int t;
//	ifstream fin("52.txt", ios::in);
//	ofstream fout("52out.txt", ios::out);
	fin>>t;
	while(t--){
		ll n, dem=0;
		fin>>n;
		vector<ll> a;
		for(int i=1; i<=n; ++i){
			ll x;
			fin>>x;
			if(x!=0){
				a.push_back(x);
			}
			else{
				dem++;
			}
		}
		for(ll i=0; i<a.size(); ++i){
			cout<<a.at(i)<<" ";
		}
		for(ll i=0; i<dem; ++i){
			cout<<0<<" ";
		} 
		cout<<endl;
	}
}

