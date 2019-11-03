#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cout fout
main(){
	int t;
	ifstream fin("92.txt", ios::in);
	ofstream fout("92out.txt", ios::out);
	fin>>t;
	while(t--){
		int n;
		vector<int> a;
		fin>>n;
		for(int i=0; i<n; ++i){
			int x;
			fin>>x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		int m=INT_MAX;
		for(int i=0; i<a.size()-1; ++i){
			m=min(m, a.at(i+1)-a.at(i));
		}
		cout<<m<<endl;
	}
}

