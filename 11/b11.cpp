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
			if(a[i]==0){
				a[i]=i;
				for(int j=i*i; j<=n; j+=i){
					if(a[j]==0) a[j]=i;
				}
			}
		}
		for(int i=1; i<=n; ++i){
			cout<<(a[i]?a[i]:i)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
