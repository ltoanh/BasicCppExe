#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
#define cout fout
int main() {
	int t, n;
	ifstream fin("78.txt", ios::in);
	ofstream fout("78out.txt", ios::out);
	fin >> t;
	while (t--) {
		fin >> n;
		vector<int> a;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
		}
		vector<int> f(n + 1, 0), b(n + 1, INT_MAX);
		b[0] = INT_MIN;
		int result = 0;
		for (int i = 0; i < a.size(); ++i) {
			int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
//			cout << k << " " << a[i] << endl;
			b[k] = a[i];
			result = max(result, k);
		}
		cout << result << endl;
	}
	system("pause");
	return 0;
}