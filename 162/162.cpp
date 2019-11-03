/*
Dem so tu trong xau ky tu co chua space, \t, \n
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define cin fin
main(){
	ifstream fin("162.txt", ios::in);
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
//		cout<<s<<endl;
		bool ktr=0;
		int dem=0;
		for(int i=0; i<s.size(); ++i){
			if(s[i]==' '){
				ktr=0;
			}
			else if(s[i]=='\\'){
				if(i+1<s.size()){
					if(s[i+1]=='t' || s[i+1]=='n'){
						ktr=0;
						i++;
					}
				}
			}
			else if(ktr==0){
				dem++;
				ktr=1;
//				cout<<s[i]<<" ";
			}
//			cout<<s[i]<<" ";
		}
		cout<<dem<<endl;
	}
}

