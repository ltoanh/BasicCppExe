#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool compare(string X, string Y){
	string XY=X.append(Y);
	string YX=Y.append(X);
	return XY>YX;
}
main(){
	int t, n;
	ifstream fin("65.in", ios::in);
	ofstream fout("65.out", ios::out);
	fin>>t;
	while(t--){
		fin>>n;
		vector<string> a;
		a.resize(n);
		for(int i=0; i<n; ++i){
			fin>>a.at(i);
		}
		sort(a.begin(), a.end(), compare);
		for(int i=0; i<a.size(); ++i){
			cout<<a[i];
		}
		cout<<endl;
	}
}

