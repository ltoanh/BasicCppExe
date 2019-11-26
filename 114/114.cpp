#include<iostream>
#include<vector>

#define ll long long
using namespace std;

int binary_search(vector<int> a, int left, int right, int x){
	if(left>right){
		return -1;
	}
	int mid=(left+right)/2;
	if(a[mid]==x){
		return mid;
	}
	if(a[mid]>x){
		return binary_search(a,left, mid-1, x);
	}
	return binary_search(a,mid+1, right, x);
}

int find_pivot(vector<int> a, int left, int right){
	if(left>right){
		return -1;
	}
	if(left==right){
		return left;
	}
	int mid=(left+right)/2;
	if(mid < right && a[mid] > a[mid+1]){
		return mid;
	}
	if(mid > left && a[mid] < a[mid-1]){
		return mid-1;
	}
	if(a[left]>=a[mid]){
		return find_pivot(a, left, mid-1);
	}
	return find_pivot(a, mid+1, right);
}
int find_num(vector<int> a, int x, int n){
	int pivot=find_pivot(a, 0, n-1);
	if(pivot==-1){
		return binary_search(a, 0, n-1, x);
	}
	if(a[pivot]==x){
		return pivot;
	}	
	if(a[0]<=x){
		return binary_search(a, 0, pivot-1, x);
	}
	return binary_search(a, pivot+1, n-1, x);
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n, x;
		vector<int> a;
		cin>>n>>x;
		for(int i=0; i<n; ++i){
			int m;
			cin>>m;
			a.push_back(m);
		}
		cout<<find_num(a, x, n)<<endl;
	}
}

