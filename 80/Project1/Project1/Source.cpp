#include<iostream>
#include<algorithm>
#include<fstream>
int t, n, m, a[1007], b[1007];
using namespace std;
int main() {
	ifstream fin("80.txt", ios::in);
	ofstream fout("80out.txt", ios::out);
	fin >> t;
	while (t--) {
		fin >> n >> m;
		int sum_a = 0, sum_b = 0;
		for (int i = 1; i <= n; ++i) {
			fin >> a[i];
			sum_a += a[i];
		}
		for (int i = 1; i <= m; ++i) {
			fin >> b[i];
			sum_b += b[i];
		}
		
	}
	system("pause");
	return 0;
}