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
		for(int i=0; i<s.size(); ++i){
			for(int j=i; j<s.size(); ++j){
				if(s[i]==s[j]){
					kq++;
				}
			}
		}
		cout<<kq<<endl;
	}
}

