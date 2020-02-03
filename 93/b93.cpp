#include<bits/stdc++.h>
#define ll long long
#define MAX 1007
using namespace std;
int t, n;
int a[MAX], b[MAX];

main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		for(int i=0; i<n; ++i) cin>>b[i];
		int M_len=0;
		for(int i=0; i<n; ++i){
			int s1=0, s2=0;
			for(int j=i; j<n; ++j){
				s1+=a[j]; s2+=b[j];
				if(s1==s2){
					M_len=max(M_len,i-j+1);
				}
			} // end of for j
		} // end of for i
		cout<<M_len<<endl;
	}
}

