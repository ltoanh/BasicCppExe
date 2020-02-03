#include<bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;
int t, n, x;
int a[MAX];
main(){
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=0; i<n; ++i) cin>>a[i];
		set<int> b;
		bool check=0;
		sort(a, a+n);
		for(int i=0; i<n; ++i){
			if(b.find(a[i]+x)!=b.end()){
				check=1;
				break;
			}
			else b.insert(a[i]+x);
		}
		cout<<(check?1:-1)<<endl;
		
	}
}

