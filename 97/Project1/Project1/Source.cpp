#include<iostream>
#include<vector>
#include<fstream>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("97.txt", ios::in);
	ofstream fout("97out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, m;
		vector<int> a, b;
		fin >> n >> m;
		vector<int> c(n + m, 0);
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
			c.at(a.at(i))++;
		}
		for (int j = 0; j < m; ++j) {
			int x;
			fin >> x;
			b.push_back(x);
			c.at(b.at(j))++;
		}
		for (int i = 0; i < c.size(); ++i) {
			if (c.at(i) > 0) cout << i << " ";
		}
		cout << endl;
		for (int i = 0; i < c.size(); ++i) {
			if (c.at(i) > 1) cout << i << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}