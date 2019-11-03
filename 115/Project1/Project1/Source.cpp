#include<iostream>
#include<fstream>
#include<vector>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("115.txt", ios::in);
	ofstream fout("115out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n;
		fin >> n;
		int first = INT_MAX, second = INT_MAX;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			if (x < first) {
				second = first;
				first = x;
			}
			else if (x < second && x != first) {
				second = x;
			}
		}
		if (second == INT_MAX || second == first) {
			cout << -1;
		}
		else {
			cout << first << " " << second;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}