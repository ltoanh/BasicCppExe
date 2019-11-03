//ac
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
			int dem=0;
			if(n%i==0){
				while(n%i==0){
					n/=i;
					dem++;
				}
				cout<<i<<" "<<dem<<" ";	
			}
		}
		if(n>1) cout<<n<<" "<<1;
		cout<<endl;
	}
}
