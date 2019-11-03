#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cout fout
main(){
	int t, n;
	ifstream fin("48.in", ios::in);
	ofstream fout("48.out", ios::out);
	fin>>t;
	while(t--){
		fin>>n;
		ll a[n+7];
		for(int i=0; i<n; ++i) fin>>a[i];
		int t=n-1;
		while(t>0){
			if(a[t]<a[t-1]){
				break;
			}
			t--;
		}
		cout<<(t==0?0:t)<<endl;
	}
}

