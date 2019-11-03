#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		for(ll i=2; i<=sqrt(n); ++i){
			while(n%i==0){
				n/=i;
				cout<<i<<" ";
			}
		}
		if(n>1) cout<<n<<endl;
	}
}

