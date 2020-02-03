#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t, n, a[1007];
int count(){
	int d=0;
	for(int i=0; i<n-1; ++i){
		int index=i;
		for(int j=i; j<n; ++j){
			if(a[index]>a[j]) index=j;
		} // end of for j
		if(index!=i){
			swap(a[index], a[i]);
			d++;
		} 
	} // end of for i
	return d;
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		cout<<count()<<endl;
	}
}

