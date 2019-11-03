#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cout fout
main(){
	int t, k , n;
	ifstream fin("68.txt", ios::in);
	ofstream fout("68out.txt", ios::out);
	fin>>t;
	while(t--){
		fin>>n>>k;
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
		cout<<A.at(k-1)<<endl;
	}
}

