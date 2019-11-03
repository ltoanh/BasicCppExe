#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
int main() {
	int t, n;
	ifstream fin("75.txt", ios::in);
	ofstream fout("75out.txt", ios::out);
	fin >> t;
	while (t--) {
		fin >> n;
		vector<int> a;
		vector<int>::iterator it;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
		}
		int max = 0;
		for (it = a.begin(); it < a.end() - 1; ++it) {
			if (*it > *(it + 1)) {
				max = *it;
				break;
			}
		}
		cout << max << endl;
	}
	system("pause");
	return 0;
}