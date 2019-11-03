#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cin fin
main(){
	ifstream fin("165.txt", ios::in);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<int> a(26,0);
		for(int i=0; i<s.size(); ++i){
			a[s[i]-'A']++;
		}
		for(int i=0; i<a.size(); ++i){
			if(a[i]==1){
				cout<<(char)(i+'A');
			}
		}
		cout<<endl;
	}
}

