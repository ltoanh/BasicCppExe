#include<iostream>
#include<algorithm>
#include<fstream>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("107.txt", ios::in);
	ofstream fout("107out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, a[1007], b[1007] = { 0 };
		fin >> n;
		int m = INT_MAX, M = 0;
		for (int i = 1; i <= n; ++i) {
			fin >> a[i];
		}
		for (int i = 1; i <= n; ++i) {
			m = min(m, a[i]);
			M = max(M, a[i]);
			b[a[i]]++;
		}
		int dem = 0;
		for (int i = m + 1; i < M; ++i) {
			if (b[i] == 0) {
				dem++;
			}
		}
		cout << dem << endl;
	}
	system("pause");
	return 0;
}