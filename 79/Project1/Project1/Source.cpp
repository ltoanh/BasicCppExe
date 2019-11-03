#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>

using namespace std;

int main() {
	int t, n;
	ifstream fin("79.txt", ios::in);
	ofstream fout("79out.txt", ios::out);
	fin >> t;
	while (t--) {
		fin >> n;
		vector<int> a;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		if (a[0] > 1) {
			cout << 1;
		}
		else if (a[n - 1] < 1) {
			cout << 1;
		}
		else {
			for (int i = 0; i < a.size(); ++i) {
				if (a[i] >= 0) {
					if (i == a.size() - 1) {
						cout << a[i] + 1;
						break;
					}
					if ((a[i] + 1) != a[i + 1]) {
						cout << a[i] + 1;
						break;
					}
				}
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}