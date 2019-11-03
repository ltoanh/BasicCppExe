#include<iostream>
#include<fstream>
#define ll long long
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("113.txt", ios::in);
	ofstream fout("113out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n;
		ll sum = 0;
		fin >> n;
		for (int i = 1; i < n; ++i) {
			int x;
			fin >> x;
			sum += x;
		}
		ll total_sum = n*(n + 1)/2;
		cout << total_sum - sum << endl;
	}
	system("pause");
	return 0;
}