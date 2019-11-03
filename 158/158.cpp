#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#define ll long long
#define cin fin
using namespace std;
long find_max(string str){
	long gtr=str[0]-'0';
	for(int i=1; i<str.size(); ++i){
		if(str[i]=='0' || str[i]=='1' || str[i-1]=='0' || str[i-1]=='1'){
			gtr+=(str[i]-'0');
		}
		else{
			gtr*=(str[i]-'0');
		}
	}
	return gtr;
}
main(){
	ifstream fin("158.txt", ios::in);
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<find_max(str)<<endl;
	}
}

