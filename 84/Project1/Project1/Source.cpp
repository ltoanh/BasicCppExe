#include<iostream>
#include<vector>
#include<fstream>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("84.txt", ios::in);
	ofstream fout("84out.txt", ios::out);
	fin >> t;
	while (t--) {
		int l, r;
		fin >> l >> r;
		vector<bool> snt(r + 1, true);
		snt.at(0) = false;
		snt.at(1) = false;
		for (int i = 2; i*i <= r; ++i) {
			if (snt.at(i)) {
				for (int j = i * i; j <= r; j += i) {
					snt.at(j) = false;
				}
			}
		}
		int dem = 0;
		for (int i = l; i <= r; ++i) {
			if (snt.at(i)) {
				dem++;
			}
		}
		cout << dem << endl;
	}
	system("pause");
	return 0;
}