#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, k, a[1007];

main(){
	cin>>t;
	while(t--){
		cin>>k>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		int M=0, pos=k-1;
		for(int i=0; i<k; ++i) M+=a[i];
		int ans=M;
		for(int i=k; i<n; ++i){
			ans+=a[i];
			ans-=a[i-k];
			if(ans>M){
				M=ans;
				pos=i;
			}
		} // end of for
		for(int i=pos-k+1; i<=pos; ++i) cout<<a[i]<<" ";
		cout<<endl;
	}	
}

