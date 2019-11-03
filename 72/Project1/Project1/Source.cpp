#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("72.txt", ios::in);
	ofstream fout("72out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, vt_min=0, gt_min=0, hieu_max=0;
		fin >> n;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			if (i == 0) {
				gt_min = x;
			}
			if (x < gt_min) {
				gt_min = x;
			}
			else {
				hieu_max = max(hieu_max, x - gt_min);
			}
		}
		if (hieu_max) {
			cout << hieu_max << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
	system("pause");
	return 0;
}