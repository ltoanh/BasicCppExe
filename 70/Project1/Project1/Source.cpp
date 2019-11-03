#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

int main() {
	int t, n, k;
	ifstream fin("70.txt", ios::in);
	ofstream fout("70out.txt", ios::out);
	fin >> t;
	while (t--) {
		fin >> n >> k;
		vector<int> a;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				int x;
				fin >> x;
				a.push_back(x);
			}
		}
		sort(a.begin(), a.end());
		cout << a[k-1] << endl;
	}
	system("pause");
	return 0;
}