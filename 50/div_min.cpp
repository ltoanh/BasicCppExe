#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; ++i)
#define nFOR(i,a,b) for(int i=a; i>b; --i)

#define ll long long
const int MAX=1e+5;
using namespace std;
int t, n;

int find_min(int n, vector<int> a){
	if(n==2) return min(a[0], a[1]);
	return min(a[n-1], find_min(n-1,a));
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> a;
		FOR(i, 0, n){
			int x; cin>>x; 
			a.push_back(x);
		}
		cout<<find_min(n,a)<<endl;
	}
}

