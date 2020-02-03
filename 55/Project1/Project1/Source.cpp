#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n, a[1007];
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		sort(a, a+n);
		int l=0, r=n-1;
		while(l<r){
			cout<<a[r]<<" "<<a[l]<<" ";
			l++; r--;
		}
		if(l==r) cout<<a[l]<<" ";
		cout<<endl;
	}
}

