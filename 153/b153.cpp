#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t;
string s;
main(){
	cin>>t;
	while(t--){
		cin>>s;
		int dem[26]={0};
		int M=0;
		for(int i=0; i<s.size(); ++i){
			dem[s[i]-'a']+=1;
			M=max(M, dem[s[i]-'a']);
		}
		int len=s.size();
		if(M<=len/2+len%2) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

