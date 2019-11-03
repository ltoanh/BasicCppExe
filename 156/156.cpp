/*
Tinh tong cac so co mat trong xau
---------------------------------
*/
#include<iostream>
#include<string>
#include<ctype.h> //isdigit
#include<stdlib.h> //atoi
#include<fstream>
#define ll long long
#define cin fin
using namespace std;
int find_sum(string str){
	string temp="";
	int sum=0;
	for(int i=0; i<str.length(); ++i){
		if(isdigit(str[i])){ //ktra str[i] la chu so
			while(isdigit(str[i])){
				temp+=str[i];
				++i;
			}
			sum+=atoi(temp.c_str()); //chuyen string -> int
			temp="";
		}
	}
	return sum;
}
main(){
	ifstream fin("156.txt", ios::in);
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
//		cout<<str<<endl;
		cout<<find_sum(str)<<endl;
	}
}

