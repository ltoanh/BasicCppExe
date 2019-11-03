#include<iostream>
#include<algorithm>
#include<fstream>
#include<vector>
using namespace std;
#define fin cin
int main() {
	int t, n, m;
//	ifstream fin("63.txt", ios::in);
//	ofstream fout("63out.txt", ios::out);
	fin >> t;
	while (t--) {
		fin >> n >> m;
		vector<int> a, b;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
		}
		for (int i = 0; i < m; ++i) {
			int x;
			fin >> x;
			b.push_back(x);
		}
		vector<int> c;
		for (int i = 0; i < m; ++i) {
			for(int j = 0; j < n; ++j){
				if(a[j]>0){
					if(a[j]==b[i]){
						c.push_back(a[j]);
						a[j]=0;
					}
				}
			}
		}
		for(int i=0; i<n; ++i){
			if(a[i]!=0){
				c.push_back(a[i]);
			}
		}
		for(int i=0; i<c.size();i++){
			cout<<c[i]<<" ";
		}
		cout << endl;
	}
//	system("pause");
	return 0;
}
