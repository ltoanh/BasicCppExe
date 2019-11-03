#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cout fout
main(){
	int t, n;
	ifstream fin("69.txt", ios::in);
	ofstream fout("69out.txt", ios::out);
	fin>>t;
	while(t--){
		fin>>n;
		vector<int> A;
		for(int i=0; i<n; ++i){
			int x;
			fin>>x;
			A.push_back(x);
		}
		sort(A.begin(), A.end());
//		for(int i=0; i<n; ++i){
//			cout<<A[i]<<" ";
//		}
//		cout<<endl;
		cout<<A.at(n-1)<<endl;
	}
}

