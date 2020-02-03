#include<bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;
int t, n;
int a[MAX];
int sor(int l, int r){
	if(r-l==1){
		return (a[l]<a[r]?a[l]:a[r]);
	}
	int m=(l+r)/2;
	int u=sor(l, m);
	int v=sor(m, r);
	return u<v?u:v;
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		cout<<sor(0,n-1)<<endl;
	}
}

