#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(int x, int y){
	return abs(x)<abs(y);
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n, a[1007];
		cin>>n;
		for(int i=0; i<n; ++i){
			cin>>a[i];
		}
		sort(a, a+n, cmp);
		int m=INT_MAX, value=INT_MAX;
		for(int i=1; i<n; ++i){
			if(abs(a[i]+a[i-1])<=m){
				m=abs(a[i]+a[i-1]);
				value=(a[i]+a[i-1]);
			}
		}
		cout<<value<<endl;
	}
}

