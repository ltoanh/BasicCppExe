#include<iostream>
#include<algorithm>
#include<fstream>
#include<vector>
#include<math.h>
#include<utility>
#define cout fout
int x;
using namespace std;
int main() {
	int t;
	ifstream fin("95.txt", ios::in);
	ofstream fout("95out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, x;
		fin >> n >> x;
		vector< pair<int,int> >a;
		for (int i = 0; i < n; ++i) {
			int tmp;
			fin >> tmp;
			a.push_back({ tmp, abs(x - tmp) });
		}
		sort(a.begin(), a.end(), [](auto &t1, auto &t2) {
			return t1.second < t2.second;
		});
		for (int i = 0; i < a.size(); ++i) {
			cout << a.at(i).first << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
