#include<iostream>
#include<fstream>
#include<algorithm>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("90.txt", ios::in);
	ofstream fout("90out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, a[1007];
		fin >> n;
		int m = INT_MAX;
		for (int i = 1; i <= n; ++i) {
			fin >> a[i];
			m = min(m, a[i]);
		}
		int step = n;
		int tmp = 1;
		while (tmp <= m/2) {
			tmp *= 2;
			step += 1;
		}
		for (int i = 1; i <= n; ++i) {
			step += a[i] - tmp;
		}
		cout << step << endl;
	}
	system("pause");
	return 0;
}
