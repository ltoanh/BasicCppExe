#include<bits/stdc++.h>
#define ll long long
using namespace std;
int solve(int n, int k){
	int M;
	for(int i=2; i*i<=n; ++i){
		while(n%i==0){
			n/=i;
			k--;
			if(k==0){
				return i;
			}
		} //end of while
	} // end of for
	if(n>1 && k>0){
		M=n;
		k--;
	} 
	if(k) return -1;
	return M;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		cout<<solve(n, k)<<endl;
	}
}

