/*
Tim so lon nhat co mat trong xau
---------------------------------
*/
#include<iostream>
#include<string>
#include<algorithm>
#include<ctype.h> //isdigit
#include<stdlib.h> //atoi
#include<fstream>
#define cin fin
using namespace std;
int find_max(string str){
	string temp="";
	int M=INT_MIN;
	for(int i=0; i<str.length(); ++i){
		if(isdigit(str[i])){ //ktra str[i] la chu so
			while(isdigit(str[i])){
				temp+=str[i];
				++i;
			}
			M=max(atoi(temp.c_str()),M); //chuyen string -> int
			temp="";
		}
	}
	return M;
}
main(){
	ifstream fin("157.txt", ios::in);
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<find_max(str)<<endl;
	}
}

