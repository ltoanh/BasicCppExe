#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n;
string a;

main(){
	cin>>t;
	while(t--){
		cin>>n;
		int d[10]={0};
		cin.ignore();
		for(int i=0; i<n; ++i){
			cin>>a;
			for(int j=0; j<a.size(); ++j){
				d[a[j]-'0']++;
			}
		}
		for(int i=0; i<10; ++i){
			if(d[i]) cout<<i<<" ";
		}
		cout<<endl;
	}
}

