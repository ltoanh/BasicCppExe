/*
P(n,x)=a(n-1)*x^(n-1)+a(n-2)*x^(n-2)+....+a1*x+a0
P%1e9+7=?;

**************************************************

Luoc do Hoocner:
vd: x^3-6x^2-x+30=0  x=3;
	| 1	|-6	|-1	| 30
x=3 | 1	|-3	|-10| 0
    3*1 + -6 = -3
    3*(-3) + -1 = -10
	...
(x-3)(x+2)(x-5)	
     
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007
#define int long long
main(){
	int t;
	cin>>t;
	while(t--){
		int n, x, a[2007];
		cin>>n>>x;
		for(int i=1; i<=n; ++i){
			cin>>a[i];
		}
		int temp=a[1];
		for(int i=2; i<=n; ++i){
			temp=(temp*x+a[i])%mod;
		}
		cout<<temp%mod<<endl;
	}
}

