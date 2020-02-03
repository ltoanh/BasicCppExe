#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, k, a[107];

main(){	
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0; i<n; ++i) cin>>a[i];
		set<int> s;
		int d=0;
		for(int i=0; i<n; ++i){
			int temp=a[i]-k;
			if(s.find(temp)!=s.end()){
				d++;
				s.erase(temp);
			}
			else s.insert(temp);
		}	
		cout<<d<<endl;
	}
}

