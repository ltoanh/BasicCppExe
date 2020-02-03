#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, a[1007];

main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		int count=0;
		int l=0, r=n-1;
		while(l<r){
			if(a[l]==a[r]){
				l++; r--;
			}
			if(a[l]<a[r]){
				a[l+1]+=a[l];
				count++;
				l++;
			}
			if(a[l]>a[r]){
				a[r-1]+=a[r];
				r--;
				count++;
			}
		} // end of while(l<r)
		cout<<count<<endl;
	}
}

