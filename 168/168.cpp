/*
Dao nguoc cac tu trong xau
VD: “I like this program very much”
=> “much very program this like I”
*/
#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#define ll long long
using namespace std;
#define cin fin
main(){
	ifstream fin("168.txt", ios::in);
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int st=0, end=0;
		for(int i=0; i<s.size(); ++i){
			if(s[i]!=' '){
				st=i;
				while(s[i]!=' ' && i<s.size()){
					++i;
				}
			}
			end=i-1;
			int left=st, right=end;
			while(left<=right){
				swap(s[left], s[right]);
				left++;
				right--;
			}
		}
		reverse(s.begin(), s.end());
		cout<<s<<endl;
	}
}

