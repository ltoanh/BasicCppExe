//lam sai
#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long find_max(ll a[], int n){
	int M=a[0], m=a[0], MAX=a[0];
	for(int i=1; i<n; ++i){
		if(a[i]<0){
			ll temp=M;
			M=max(a[i], m*a[i]);
			m=min(a[i], temp*a[i]);
		}
		else{
			M=max(a[i], M*a[i]);
			m=min(a[i], m*a[i]);
		}
		MAX=max(MAX, M);
	}
	return MAX;
}
main(){
	int t;
	cin>>t;
	while(t--){
		ll n, a[107];
		cin>>n;
		for(int i=0; i<n; ++i){
			cin>>a[i];
		}
		cout<<find_max(a,n)<<endl;
	}
}

