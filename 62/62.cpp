//lam sai
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll find_max(ll a[], int n){
	ll current_max=a[0], current_min=a[0], final=a[0];
	for(int i=1; i<n; ++i){
		ll temp=current_max;
		current_max=max(max(current_max*a[i], current_min*a[i]), a[i]);
		current_min=min(min(temp*a[i], current_min*a[i]), a[i]);
		if(current_max>final){
			final=current_max;
		}
	}
	return final;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		ll a[107];
		cin>>n;
		for(int i=0; i<n; ++i){
			cin>>a[i];
		}
		cout<<find_max(a,n)<<endl;
	}
}

