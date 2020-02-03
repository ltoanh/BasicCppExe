#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, l, r;
int a[10007];

bool solve(){
	int i=l;
	while(i<r && a[i]<=a[r]){
		i++;
	}
	if(i==l || i==r) return 0;
	while(i<r && a[i]>=a[r]) i++;
	if(i!=r) return 0;
	return 1;
}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		cin>>l>>r;
		cout<<(solve()?"Yes":"No")<<endl;
	}
}

