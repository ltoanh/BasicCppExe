#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll M;
		for(ll i=2; i<=sqrt(n); ++i){
			while(n%i==0){
				n/=i;
				M=i;
			}
		}
		cout<<(n>1?n:M)<<endl;
	}
}

