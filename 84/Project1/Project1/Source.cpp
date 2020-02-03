#include<bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;
int t, l, r;
int a[MAX];

void sang_nt(){
	a[1]=a[0]=0;
	for(int i=2; i<=MAX; ++i) a[i]=1;
	for(int i=2; i<=sqrt(MAX); ++i){
		if(a[i]){
			for(int j=i*i; j<=MAX; j+=i) a[j]=0;
		}
	}
	for(int i=1; i<=MAX; ++i) a[i]+=a[i-1];
} 
main(){
	cin>>t;
	sang_nt();
	while(t--){
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<endl;
	}
}

