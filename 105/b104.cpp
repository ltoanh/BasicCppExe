#include<bits/stdc++.h>
#define ll long long
#define MAX 1000007
using namespace std;
int t, n, m;
main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		set<int> a, b;
		int x;
		for(int i=0; i<n; ++i){
			cin>>x; a.insert(x);
		}
		for(int i=0; i<m; ++i){
			cin>>x; b.insert(x);
		}
		
		set<int>::iterator i1=a.begin();
		set<int>::iterator i2=b.begin();
		while (i1 != a.end()) i1++;
		i1--;
		cout<<(ll)*(i1)*(*i2);
		cout<<endl;
	}
}

