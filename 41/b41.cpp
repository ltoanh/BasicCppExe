#include<bits/stdc++.h>
#define ll long long
const int mod=1e9+7;
using namespace std;

int t, n;

int fibo(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	int step=2;
	int f0=0, f1=1;
	int f3;
	for(int i=2; i<=n; ++i){
		f3=(f1+f0)%mod;
		f0=f1;
		f1=f3;
	}
	return f3;
}

main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<fibo(n)<<endl;
	}	
}

