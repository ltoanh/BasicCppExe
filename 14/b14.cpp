#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(int n){
	int count=0;
	for(int i=2; i*i<=n; ++i){
		if(n%i==0){
			count++;
			if(count>3) return 0;
			int dif=0;
			while(n%i==0){
				n/=i;
				dif++;
			}
			if(dif>1) return 0;
		}
	}
	if(n>1) count++;
	if(count==3) return 1;
	return 0;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<(solve(n)?1:0)<<endl;
	}
}

