#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, k;

main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		set<int> s;
		for(int i=0; i<n; ++i){
			int x; cin>>x;
			s.insert(x);
		}
		set<int>::iterator it;
		int count=0;
		for(it=s.begin(); it!=s.end(); ++it){
			count++;
			if(count==k){
				cout<<*it;
				break;
			}			
		}
//		cout<<*it<<endl;
	}
}

