#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n, a[1007];
		cin>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		sort(a, a+n);
		int b[n+7];
		int m=n/2+n%2;
		for(int i=0; i<m; ++i) b[i*2]=a[i];
		for(int i=m; i<n; ++i) b[(i-m)*2+1]=a[i];
		for(int i=0; i<n; ++i) cout<<b[i]<<" ";
		cout<<endl;
	}
}

