#include<iostream>
#include<vector>
#include<fstream>
#define cout fout
using namespace std;
bool check(int l, int r, vector<int> a) {
	int i, j;
	/*increasing*/
	for (i = l + 1; i <= r; ++i) {
		if (a.at(i) < a.at(i - 1)) {
			break;
		}
	}
	if (i == r) {
		return 1;
	}
	/*decreasing*/
	for (j = i; i <= r; ++i) {
		if (a.at(i) > a.at(i - 1)) {
			break;
		}
	}
	i -= 1;
	if (i == r) {
		return 1;
	}
	return 0;
}
int main() {
	int t;
	ifstream fin("83.txt", ios::in);
	ofstream fout("83out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, l, r;
		vector<int> a;
		fin >> n;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
		}
		fin >> l >> r;
		cout << (check(l, r, a) ? "YES" : "NO") << endl;
	}
	system("pause");
	return 0;
}