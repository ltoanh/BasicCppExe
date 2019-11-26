//runtime
#include<bits/stdc++.h>
#define ll long long
#define MAX 1000007
using namespace std;
int n, m;
int a[MAX], b[MAX];

void merge(){
	sort(a, a+n);
	sort(b, b+m);
	int i=0, j=0;
	while(i<n && j<m){
		if(a[i]<b[j]){
			cout<<a[i++]<<" ";
		}
		if(b[j]<a[i]){
			cout<<b[j++]<<" ";
		}
	}
	while(i<n){
		cout<<a[i++]<<" ";
	}
	while(j<m){
		cout<<b[j++]<<" ";
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0; i<n; ++i){
			cin>>a[i];
		}
		for(int i=0; i<m; ++i){
			cin>>b[i];
		}
		merge();
	}
}

