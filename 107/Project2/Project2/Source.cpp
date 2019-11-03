#include<iostream>
#include<set>
#include<fstream>
#include<algorithm>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("107.txt", ios::in);
	ofstream fout("107.2out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n;
		fin >> n;
		set<int> a;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.insert(x);
		}
		set<int>::iterator it = a.begin();
		advance(it, 0);
		int m = *it;
		advance(it, a.size() - 1);
		int M = *it;
		cout << M - m + 1 - a.size() << endl;
	}
	system("pause");
	return 0;
}