#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n;
int a[10007];
vector<int> dem;
bool cmp(int x, int y){
	if(dem[x]==dem[y]) return x<y;
	return dem[x]>dem[y];
}
main(){
	cin>>t;
	while(t--){
		dem.assign(100007,0);
		cin>>n;
		for(int i=0; i<n; ++i){
			cin>>a[i];
			dem[a[i]]++;
		}
		sort(a, a+n, cmp);
		for(int i=0; i<n; ++i) cout<<a[i]<<" ";
		cout<<endl;
	}
}

