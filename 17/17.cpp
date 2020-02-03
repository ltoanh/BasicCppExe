#include<bits/stdc++.h>
#define ll long long
using namespace std;
/* ktra so nguyen to */
int nto(int n){
	for(int i=2; i*i<=n; ++i){
		if(n%i==0){
			return 1;
		}
	}
	return 0;
}
/* tinh tong cac chu so */
int tcs(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
/* tinh tong cac uoc so */
int uoc(int n){
	int sum=0;
	for(int i=2; i*i<=n; ++i){
		while(n%i==0){
			int x=tcs(i);
			sum+=x;
			n/=i;
		}
	}
	if(n>1) sum+=tcs(n);
	return sum;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(nto(n)){
			if(uoc(n)==tcs(n)) cout<<"YES";
			else cout<<"NO";
		}
		else cout<<"NO";
		cout<<endl;
	}
}

