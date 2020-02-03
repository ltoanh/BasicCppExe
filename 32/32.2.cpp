#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+7];
		for(int i=0; i<n; ++i) cin>>a[i];
		/*tim uoc chung lon nhat cua cac phan tu co hieu khac 0*/
		sort(a, a+n);
		vector<int> b(n+7);
		for(int i=1; i<n; ++i){
			if(a[i]-a[0]) b.push_back(a[i]-a[0]);
		}
		int ucln=b[0];
		for(int i=1; i<b.size(); ++i){
			ucln=__gcd(ucln, b[i]);
		}
		/*tim so uoc cua hieu*/
		long dem=2;
		for(int i=2; i*i<=ucln; ++i){
			if(ucln%i==0){
				if(i==ucln/i){
					dem+=1;
				}
				else{
					dem+=2;
				}
			} //end of if
		} //end of for
		cout<<dem<<endl;
	}
}

