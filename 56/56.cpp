#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define fin cin
main(){
	int t;
//	ifstream fin("56.txt", ios::in);
//	ofstream fout("56out.txt", ios::out);
	fin>>t;
	while(t--){
		int n;
		vector<int> a, b;
		fin>>n;
		for(int i=0; i<n; ++i){
			int x;
			fin>>x;
			a.push_back(x);
		}
		int dem=0;
		for(int i=0; i<a.size(); ++i){
			if(i==a.size()-1){
				if(a.at(i)!=0){
					b.push_back(a.at(i));
				}
				else{
					dem++;
				}
			}
			else if(a.at(i)!=0){
				if(a.at(i)==a.at(i+1)){
					a.at(i)*=2;
					a.at(i+1)=0;
				}
				b.push_back(a.at(i));
			}
			else{
				dem++;
			}
		}
		for(int i=0; i<b.size(); ++i){
			cout<<b.at(i)<<" ";
		}
		for(int i=0; i<dem; ++i){
			cout<<0<<" ";
		}
		cout<<endl;
	}
}

