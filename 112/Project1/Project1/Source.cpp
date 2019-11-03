#include<iostream>
#include<algorithm>
#include<fstream>
#include<vector>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("112.txt", ios::in);
	ofstream fout("112out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, x;
		vector<int> a;
		fin >> n >> x;
		for (int i = 0; i < n; ++i) {
			int tm;
			fin >> tm;
			a.push_back(tm);
		}
		sort(a.begin(), a.end());
		if (binary_search(a.begin(), a.end(), x)) {
			cout<<1;
		}
		else {
			cout<<-1;
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}