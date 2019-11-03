#include<iostream>
#include<set>
#include<algorithm>
#include<fstream>
#include<vector>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("124.txt", ios::in);
	ofstream fout("124out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n;
		vector<int> a;
		fin >> n;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
		}
		set<int> f;
		int first = a.at(0);
		for (int i = 0; i < n; ++i) {
			if (f.find(a.at(i)) == f.end()) {
				f.insert(a.at(i));
			}
			else {
				first = a.at(i);
				break;
			}
		}
		cout << first << endl;
	}
	system("pause");
	return 0;
}