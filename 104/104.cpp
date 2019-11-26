#include<iostream>
#include<algorithm>

using namespace std;

void swap(int *a, int *b){
	int t=*a;
	*a=*b;
	*b=t;
}

void QuickSort(int arr[], int l, int r){
	if(l<=r){
		int value=arr[(l+r)/2];
		int i=l, j=r;
		while(i<=j){
			while(arr[i]<value){
				i++;
			}
			while(arr[j]>value){
				j--;
			}
			if(i<=j){
				swap(arr[i], arr[j]);
				i++; j--;
			}
		}
		if(l<j){
			QuickSort(arr, l, j);
		}
		if(r>i){
			QuickSort(arr, i, r);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		int a[n+7], b[m+7];
		for(int i=0; i<n; ++i){
			cin>>a[i];
		}
		for(int i=0; i<m; ++i){
			cin>>b[i];
		}
		QuickSort(a, 0, n-1);
		QuickSort(b, 0, m-1);
		cout<<a[n-1]*b[0]<<endl;
	}
	return 0;
}
