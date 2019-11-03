#include<bits/stdc++.h>
using namespace std;
#define ll long long

string mul(string num1, string num2){
	int len1=num1.size();
	int len2=num2.size();
	if(len1==0 || len2==0)
		return "0";
	int i_n1=0, i_n2=0;
	vector<int> result(len1+len2,0);
	for(int i=len1-1; i>=0; --i){
		int carry = 0;
		int n1 = num1[i]-'0';
		i_n2=0;
		for(int j=len2-1; j>=0; --j){
			int n2=num2[j]-'0';
			int sum=n1*n2+result[i_n1+i_n2]+carry;
			carry=sum/10;
			result[i_n1 + i_n2] = sum % 10;
			i_n2++;			
		}
		if(carry>0)
			result[i_n1+i_n2]+=carry;
		i_n1++;
	}
	int i=result.size()-1;
	while(i>=0 && result[i]==0)
		i--;
	string s="";
	while (i >= 0) 
        s += result[i--] +'0';
	return s;
}
main(){
	int t;
	ifstream fin("39.in", ios::in);
	fin>>t;
	while(t--){
		string num1, num2;
		fin>>num1>>num2;
		cout<<mul(num1, num2);
	}	
}
