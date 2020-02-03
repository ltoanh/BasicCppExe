#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+7]={0};
		for(int i=2; i*i<=n; ++i){
			for(int j=i*i; j<=n; j+=i) a[j]=1;
		}
		for(int i=2; i<=n; ++i){
			if(a[i]!=1) cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
