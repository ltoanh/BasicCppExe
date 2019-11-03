#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
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
	ifstream fin("122.txt", ios::in);
	ofstream fout("122out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, x;
		vector<int> a;
		fin >> n >> x;
		for (int i = 0; i < n; ++i) {
			int tm;
			fin >> tm;
			a.push_back(tm);
		}
		sort(a.begin(), a.end());
		bool check = 0;
		for (int i = 0; i < n; ++i) {
			int tmp = x + a.at(i);
			int t1 = binarysearch(i + 1, n - 1, tmp, a);
			if (t1 != -1) {
				check = 1;
				break;
			}
		}
		cout << (check ? 1 : -1 ) << endl;
	}
	system("pause");
	return 0;
}