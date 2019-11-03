#include<iostream>
#include<fstream>
#include<vector>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("120.txt", ios::in);
	ofstream fout("120out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n;
		fin >> n;
		vector<int> a(n + 1, 1);
		a.at(0) = 0;
		a.at(1) = 0;
		for (int i = 2; i*i <= n; ++i) {
			if (a.at(i)) {
				for (int j = i * i; j <= n; j += i) {
					a.at(j) = 0;
				}
			}
		}
		bool check = 0;
		for (int i = 2; i <= n / 2; ++i) {
			if (a.at(i)) {
				int s1 = a.at(i);
				int s2 = a.at(n - i);
				if (s2) {
					check = 1;
					cout << i << " " << n-i;
				}
			}
		}
		if (!check) {
			cout << -1;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}