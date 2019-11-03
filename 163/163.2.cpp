/*
Substrings with similar first and last characters
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cin fin
main(){
	ifstream fin("163.txt", ios::in);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int kq=0;
		vector<int> a(26,0);
		for(int i=0; i<s.size(); ++i){
			a[s[i]-'a']++;
		}
		for(int i=0; i<a.size(); ++i){
			kq+=(a[i]*(a[i]+1))/2;
		}
		cout<<kq<<endl;
	}
}

