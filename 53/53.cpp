#include<bits/stdc++.h>
#define ll long long
using namespace std;

main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int dem=0;
		vector<int> a;
		//dem so luong phan tu <= k
		for(int i=0; i<n; ++i){
			int x; cin>>x;
			a.push_back(x);
			if(x<=k){
				dem++;
			}
		}
		//su dung ky thuat 2 con tro cho cua so co do dai dem
		//xem moi lan co bao nhieu so > k
		int bad=0;
		for(int i=0; i<dem; ++i){
			if(a[i]>k){
				bad++;
//				cout<<a[i]<<" ";
			}
		}
		int ans=bad;
//		cout<<ans<<" ";
		for(int i=0, j=dem; j<n; ++i, ++j){
			if(a[i]>k){
				--bad;
			}
			if(a[j]>k){
				++bad;
			}
			ans=min(ans,bad);
		}
		cout<<ans<<endl;
	}
}

