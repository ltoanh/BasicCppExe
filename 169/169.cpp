#include<iostream>
#include<string>
#include<algorithm>
#include<ctype.h> //isdigit
#include<vector>
#include<fstream>
#define ll long long
using namespace std;
#define cin fin
main(){
	ifstream fin("169.txt", ios::in);
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
//		cout<<s<<endl;
		vector<char> a;
		int sum=0;
		string temp="";
		for(int i=0; i<s.size(); ++i){
			if(isdigit(s[i])){
				sum+=(s[i]-'0');
			}
			else{
				a.push_back(s[i]);
			}
//			cout<<a[i]<<" "<<i<<" "<<sum<<endl;
		}
		sort(a.begin(), a.end());
		for(int i=0; i<a.size(); ++i){
			cout<<a[i];
		}
		cout<<sum<<endl;
	}
}

