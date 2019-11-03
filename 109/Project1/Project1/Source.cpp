#include<iostream>
#include<algorithm>
#include<fstream>
#include<vector>
#include <utility>
#define cout fout
using namespace std;
bool cmp(const pair<int, int> &x, const pair<int, int> &y) {
	if (x.second == y.second) {
		return x.first < y.first;
	}
	return x.second > y.second;
}
int main() {
	int t;
	ifstream fin("109.txt", ios::in);
	ofstream fout("109out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, a[10007] = { 0 };
		fin >> n;
		int M = 0;
		vector< pair<int, int> > b;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			M = max(M, x);
			a[x]++;
		}
		for (int i = 1; i <= M; ++i) {
			if (a[i] > 0) {
				b.push_back({ i,a[i] });
			}
		} 
		sort(b.begin(), b.end(), cmp);
		for (int i = 0; i < b.size(); ++i) {
			for (int j = 1; j <= b.at(i).second; ++j) {
				cout << b.at(i).first << " ";
			}
		}
		cout << endl; 
	}
	system("pause");
	return 0;
}