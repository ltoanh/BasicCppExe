#include<iostream>
#include<fstream>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("99.txt", ios::in);
	ofstream fout("99out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, a[3] = { 0 };
		fin >> n;
		for (int i = 1; i <= n; ++i) {
			int x;
			fin >> x;
			a[x]++;
		}
		for (int i = 0; i <= 2; ++i) {
			for (int j = 1; j <= a[i]; ++j) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}