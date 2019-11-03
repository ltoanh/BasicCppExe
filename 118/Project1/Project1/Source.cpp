#include<iostream>
#include<algorithm>
#include<fstream>
#define cout fout
using namespace std;
int count(int a[], int k, int n) {
	int *left = lower_bound(a, a + n, k);
	if (left == a + n || *left != k) {
		return -1;
	}
	int *right = upper_bound(a, a + n, k);
	return right - left;
}
int main() {
	int t;
	ifstream fin("118.txt", ios::in);
	ofstream fout("118out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, k, a[1007];
		fin >> n >> k;
		for (int i = 0; i < n; ++i) {
			fin >> a[i];
		}
		int t = count(a, k, n);
		cout << t << endl;
	}
	system("pause");
	return 0;
}