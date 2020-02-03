#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, k;
	
main(){
	cin>>t;
	while(t--){
		vector<int> a;
		cin>>n>>k;
		for(int i=0; i<n; ++i){
			int x; cin>>x;
			a.push_back(x);
		}
		vector<int>::iterator pos=find(a.begin(), a.end(), k);
		if(pos!=a.end()){
			cout<<pos-a.begin()+1;
		}
		else cout<<-1;
		cout<<endl;
	}
}

