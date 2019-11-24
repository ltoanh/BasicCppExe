#include<bits/stdc++.h>
#define ll long long
using namespace std;

inline int find_max(int a[], int n){
	int incl=a[0], excl=0, incl_new;
	for(int i=1; i<n; ++i){
		incl_new=max(incl, excl+a[i]);
		excl=incl;
		incl=incl_new;
	}
	return max(excl, incl);
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n, a[100007];
		cin>>n;
		for(int i=0; i<n; ++i){
			cin>>a[i];
		}
		cout<<find_max(a, n)<<endl;
	}
}

