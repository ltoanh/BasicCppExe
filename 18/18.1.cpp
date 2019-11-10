/*
PERFECT NUMBER
2^p(2^(p+1)- 1) is an even perfect number 
whenever 2^(p+1) - 1 is prime

p = 2, 3, 5, 7, 13, 17, 19, 31, 61, 89, 107, 
127, 521, 607, 1279, 2203, 2281, 3217, 4253, 
4423, 9689, 9941, 11213, 19937, 21701, ....

n<=10^18 -> p~107
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool ktra(int n){
	for(int i=2; i<=sqrt(n); ++i){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll m=2, t;
		for(int i=1; i<=150; ++i){
			ll temp=pow(2,i);
			if(ktra(temp*2-1)){
				t=temp*(temp*2-1);
				if(t>=n){
					break;
				}
			}
		}
		cout<<(t==n?1:0)<<endl;
	}
}

