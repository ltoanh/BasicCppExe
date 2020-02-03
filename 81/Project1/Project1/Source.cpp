#include<bits/stdc++.h>

using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+7];
		set<int> s;
		for(int i=0; i<n; ++i){
			cin>>a[i];
			s.insert(a[i]);
		}
		for(int i=0; i<n; ++i){
			set<int>::iterator it= s.find(a[i]);
			it++;
			if(it==s.end())	cout<<"_ ";
			else cout<<*it<<" ";
		}
		cout<<endl;
	}
}
