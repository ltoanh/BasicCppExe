/*0.85s*/
#include<bits/stdc++.h>
#define ll long long
#define forb(i,a,n) for(int i=a; i<=n; ++i)
#define forn(i,a,n) for(int i=a; i<n; ++i)
#define bfor(i,a,n) for(int i=a; i>=n; --i)
#define nfor(i,a,n) for(int i=a; i>n; --i)
using namespace std;

int tcs(int x){
	int s=0;
	while(x!=0){
		s+=x%10;
		x/=10;
	}
	return s;
}
main(){
	int t, n;
//	ifstream fin("17.in", ios::in);
//	ofstream fout("17out.txt", ios::out);
	cin>>t;
	while(t--){
		cin>>n;
		vector<bool> a(n+1, true);
		vector<int> snt;
		a.at(0)=false;
		a.at(1)=false;
		for(int i=2; i*i<=n; ++i){
			if(a.at(i)){
				for(int j=i*i; j<=n; j+=i){
					a.at(j)=false;
				}
			}
		}
		for(int i=0; i<=n/2; ++i){
			if(a.at(i)){
				snt.push_back(i);
			}
		}
		if(n==1) cout<<"NO";
		else if(a.at(n)) cout<<"NO";
		else{
			int n1=tcs(n);
			int n2=0;
			int m=n;
			for(int i=0; i<snt.size(); ++i){
			    if(n%snt.at(i)==0){
//			    	cout<<snt[i]<<" ";
    			     while(n%snt.at(i)==0){
    					n2+=tcs(snt.at(i));
    					n/=snt.at(i);
    				}   
			    }
			}
//			cout<<endl<<n1<<" "<<n2<<endl;
			if(n1==n2) cout<<"YES";
			else cout<<"NO";
		}
		cout<<endl;
	}
}
