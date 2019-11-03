//ac
#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool fibo(ll n){
	ll a=0, b=1;
	if(n==a || n==b){
		return 1;
	}
	ll c=a+b;
	while(c<n){
		a=b;
		b=c;
		c=a+b;
		if(c==n){
			return 1;
		}
	}
	return 0;
}
main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<(fibo(n)?"YES":"NO")<<endl;
	}
}

