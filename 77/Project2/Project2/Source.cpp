#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
#define cout fout
int main() {
	int t, n;
	ifstream fin("77.txt", ios::in);
	ofstream fout("77out.txt", ios::out);
	fin >> t;
	while (t--) {
		fin >> n;
		vector<int> a;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
		}
		vector<int> f(n + 1, 0);
		int result = 1;
		for (int i = 0; i < n; ++i) {
			for (int j = i - 1; j >= 0; --j) {
				if (a[i] > a[j]) {
					f[i] = max(f[i], f[j]);
				}
			}
			f[i] += 1;
			result = max(result, f[i]);
		}
		cout << result << endl;
	}
	system("pause");
	return 0;
}
