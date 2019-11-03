#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n,x) for(int i=a; i<=n; i+=x)
#define forn(i,a,n,x) for(int i=a; i<n; i+=x)
#define bfor(i,a,n,x) for(int i=a; i>=n; i-=x)
#define nfor(i,a,n,x) for(int i=a; i>n; i-=x)
using namespace std;
#define fin cin
#define fout cout
main(){
	int t, n, k;
//	ifstream fin("45.in", ios::in );
//	ofstream fout("45.out", ios::out );
	fin>>t;
	while(t--){
		fin>>n>>k;
		int a[n];
		forb(i,1,n,1) a[i]=i;	
		while(1){
			forb(i,1,k,1) cout<<a[i];
			cout<<" ";
			int i=k;
			while(n+i-k==a[i]){
				i--;
			}
			if(i==0) break;
			else{
				a[i]++;
				int temp=a[i];
				while(i<=k){
					a[i++]=temp++;
				}
			}
		}
		cout<<endl;
	}
}

