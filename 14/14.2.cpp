#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		int dem=0, sl=0;
		//note vs test n=8; 27
		for(ll i=2; i<=sqrt(n); ++i){
			if(n%i==0){
				while(n%i==0){
					n/=i;
					dem++;
				}
			sl++;	
			}
		}
		if(n>1){
			sl++;
			dem++;
		}
		cout<<((dem==3 && sl==3)?1:0)<<endl;
	}
}

