#include<iostream>
#include<algorithm>
#include<fstream>
#include<vector>
#include<utility>
#define cout fout
using namespace std;
int binarysearch(int left, int right, int x, vector< pair<int, int> > a) {
	if (left <= right) {
		int mid = left + (right - left) / 2;
		if (x == a.at(mid).first) {
			return a.at(mid).second;
		}
		if (x > a.at(mid).first) {
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
	ifstream fin("111.txt", ios::in);
	ofstream fout("111out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, x;
		fin >> n >> x;
		vector< pair<int, int> > a;
		for (int i = 0; i < n; ++i) {
			int tm;
			fin >> tm;
			a.push_back({ tm,i });
		}
		sort(a.begin(), a.end());
		int find = binarysearch(0, a.size() - 1, x, a);
		cout << find + (find != -1 ? 1 : 0) << endl;
	}
	system("pause");
	return 0;
}