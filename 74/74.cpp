/*
Maximum of all subarrays of size k
***************************************
a[] = 8 5 10 7 9 4 15 12 90 13
vtri: 0 1 2  3 4 5 6  7  8  9

k=4;
-------------------------------
for(0, 3):
	q -> 8
	q -> 8 5
	q -> 10
	q -> 10 7
=> q.front(): 10

q -> 10 9               => 10
q -> 10 9 4 (2 > 5-k=1) => 10
q -> 15					=> 15
q -> 15 12 				=> 15
q -> 90					=> 90
q -> 90 13 				=> 90

KL: 10 10 10 15 15 90 90
*/
#include<iostream>
#include<deque>
#include<algorithm>
#include<vector>

#define ll long long
using namespace std;

void find_max(vector<int> a, int k){
	deque<int> Q(k);
	int i;
	for(i=0; i<k; ++i){
		while((!Q.empty()) && a[i]>=a[Q.back()]){
			Q.pop_back(); //loai bo phan tu o cuoi 
		}
		Q.push_back(i);
	}
	for( ; i<a.size(); ++i){
		cout<<a[Q.front()]<<" ";
		while((!Q.empty()) && Q.front()<=i-k){
			Q.pop_front(); //loai bo phan tu o dau
		}
		while((!Q.empty()) && a[i]>= a[Q.back()]){
			Q.pop_back();
		}
		Q.push_back(i);
	}
	cout<<a[Q.front()]<<endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		vector<int> a;
		cin>>n>>k;
		for(int i=0; i<n; ++i){
			int x;
			cin>>x;
			a.push_back(x);
		}
		find_max(a, k);
	}
}

