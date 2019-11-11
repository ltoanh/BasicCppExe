#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> quicksort(vector<ll> a, ll left, ll right){
	ll i=left, j=right;
	ll pivot=a.at((left+right)/2);
	while(i<=j){
		while(a.at(i)<pivot)
			i++;
		while(a.at(j)>pivot)
			j--;
		if(i<=j){
			swap(a.at(i), a.at(j));
			i++;
			j--;
		}
	}
	if(left<j){
		quicksort(a, left, j);
	}
	if(i<right){
		quicksort(a, i, right);
	}
	return a;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> a, b;
		for(int i=0; i<n; ++i){
			ll x;
			cin>>x;
			a.push_back(x);
		}
		b=quicksort(a, 0, n-1);
		cout<<b[0]<<endl;
	}
}

