#include<bits/stdc++.h>
#define ll long long
using namespace std;
int find_max(vector<int> a, int X){
	int start=0, end=0;
	int n=a.size();
	int current_sum=0, min_len=n+1;
	while(end<n)
	{
		while(current_sum<=X && end<n){
			current_sum+=a[end++];
		}
		while(current_sum>X && start<end){
			min_len=min(min_len, end-start);
			current_sum-=a[start++];
		}
	}
	return min_len;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n, X;
		vector<int> a;
		cin>>n>>X;
		for(int i=0; i<n; ++i){
			int x;
			cin>>x;
			a.push_back(x);
		}
		int MAX=find_max(a,X);
		cout<<(MAX==n+1?-1:MAX)<<endl;
	}
}

