#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n;
int a[1007];
main(){
	cin>>t;
	while(t--){
		cin>>n;
		int M=-1;
		for(int i=0; i<n; ++i){
			cin>>a[i];
			M=max(a[i], M);
		}
		int count=0;
		while(M){
			for(int i=0; i<n; ++i){
				if(a[i]&1){
					a[i]-=1;
					count+=1;
				}
				a[i]/=2;
			} //end of for
			M/=2;
			count+=1;
		}	// end of while(M)
		cout<<count-1<<endl;	
	}
}

