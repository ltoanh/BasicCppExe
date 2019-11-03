#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
#define fin cin
#define fout cout
int main() {
	int t, n, d;
//	ifstream fin("47.txt", ios::in);
//	ofstream fout("47.out", ios::out);
	fin >> t;
	while (t--) {
		fin >> n >> d;
		vector<int> a;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
		}
		for (int i = 0; i < d; ++i) {
			a.push_back(a.at(i));
		}
		for (int i = d; i < a.size(); ++i) {
			cout << a.at(i) << " ";
		}
		cout << endl;
	}
//	system("pause");
	return 0;
}
