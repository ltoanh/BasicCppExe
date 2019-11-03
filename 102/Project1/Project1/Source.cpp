#include<iostream>
#include<algorithm>
#include<fstream>
#include<vector>
#define cout fout
using namespace std;
int binarysearch(int left, int right, int x, vector<int> a) {
	if (left <= right) {
		int mid = left + (right - left) / 2;
		if (x == a.at(mid)) {
			return mid;
		}
		if (x > a.at(mid)) {
			return binarysearch(mid + 1, right, x, a);
		}
		else {
			return binarysearch(left, mid - 1, x, a);
		}
	}
	return -1;
}
int main() {
	int t;
	ifstream fin("102.txt", ios::in);
	ofstream fout("102out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, k;
		vector<int> a;
		fin >> n >> k;
		for (int i = 1; i <= n; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		int dem = 0;
		for (int i = 0; i < n; ++i) {
			int tmp = k + a.at(i);
			int t1 = binarysearch(i + 1, n - 1, tmp, a);
			if (t1 != -1) {
				dem += 1;
			}
		}
		cout << dem << endl;
	}
	system("pause");
	return 0;
}