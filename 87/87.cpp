/*
Maximum Sum Increasing Subsequence
**************************************
VD: 4 6 1 3 8 4 6
a[] = 4	6 1 3 8 4 6
b[] = 4 10 1 4 18 8 14
vtri: 0 0  2 2 1  3  5 -> nhan gia tri b[i] tu vi tri
-> 18: 1, 0 -> 4, 6, 8 
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int find_max(vector<int> a, vector<int> b){
	for(int i=1; i<a.size(); ++i){
		for(int j=0; j<i; ++j){
			if(a.at(i)>a.at(j)){
				b.at(i)=max(b.at(j)+a.at(i), b.at(i));
			}
		}
	}
	int M=b.at(0);
	for(int i=0; i<b.size(); ++i){
		M=max(b.at(i), M);
	}
	return M;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a, b;
		for(int i=0; i<n; ++i){
			int x;
			cin>>x;
			a.push_back(x);
			b.push_back(x);
		}
		cout<<find_max(a,b)<<endl;
	}
}

