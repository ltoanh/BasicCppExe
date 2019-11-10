#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int ucln(vector<int> a){
	int uc=a[0];
	for(int i=1; i<a.size(); ++i){
		uc=__gcd(a[i],uc);
	}
	return uc;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n, a[100007];
		cin>>n;
		for(int i=0; i<n; ++i){
			cin>>a[i];
		}
		sort(a,a+n);
		int m=a[0];
		vector<int> b(n+7);
		for(int i=1; i<n; ++i){
			if(a[i]!=m){
				b.push_back(a[i]-m);
			}
		}
		int ans=ucln(b);
		long dem=0;
		for(int i=1; i*i<=ans; ++i){
			if(ans%i==0){
				if(i==ans/i){
					dem+=1;
				}
				else{
					dem+=2;
				}
			}
		}
		cout<<dem<<endl;
	}
}
