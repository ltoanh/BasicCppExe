#include<iostream>
#include<vector>
#include<fstream>
#define cout fout
using namespace std;

int main() {
	int t, n, q;
	ifstream fin("82.txt", ios::in);
	ofstream fout("82out.txt", ios::out);
	fin >> t;
	while (t--) {
		fin >> n >> q;
		vector<int> a, b;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
		}
		int l, r;
		for (int i = 1; i <= q; ++i) {
			fin >> l >> r;
			int s=0;
			for(int i=l; i<=r; ++i){
				s+=a.at(i);
			}
			b.push_back(s);
		}
		for (int i = 0; i < b.size(); ++i) {
			cout << b.at(i) << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
