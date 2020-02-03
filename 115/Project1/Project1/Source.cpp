#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, k;
	
main(){
	cin>>t;
	while(t--){
		cin>>n;
		set<int> a;
		for(int i=0; i<n; ++i){
			cin>>k; a.insert(k);
		}
		if(a.size()<2) cout<<-1;
		else{
			set<int>::iterator it=a.begin();
			cout<<*it<<" ";
			it++;
			cout<<*it;
		}
		cout<<endl;
	}
}

