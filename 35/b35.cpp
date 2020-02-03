#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007

main(){
	int t;
	cin>>t;
	while(t--){
		int n, x, P[2007];
		cin>>n>>x;
		for(int i=1; i<=n; ++i) cin>>P[i];
		ll temp=1;
		ll sum=0;
		for(int i=n; i>0; --i){
			sum+=(P[i]*temp);
			temp*=x;
			sum%=mod;
			temp%=mod;
		}
		cout<<sum<<endl;
	}
}

