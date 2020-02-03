#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t;
string s;
main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin, s);
		vector<string> a;
		string tp="";
		for(int i=0; i<s.size(); ++i){
			if(i==s.size()-1){
				tp+=s[i];
				a.push_back(tp);
			}
			if(s[i]!=' ') tp+=s[i];
			else if(s[i]==' ' || i==s.size()-1){
				a.push_back(tp);
				tp="";
			}
		}//end of for
		for(int i=a.size()-1; i>=0; --i) cout<<a[i]<<" ";
		cout<<endl;
	}
}

