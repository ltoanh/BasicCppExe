#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
#define fin cin
#define fout cout
void hvi(int n) {
//	ofstream fout("46out.txt", ios::app);
	int a[100];
	for (int i = 1; i <= n; ++i) {
		a[i] = i;
	}
	while (1) {
		for (int i = 1; i <= n; ++i) {
			cout << a[i];
		}
		cout << " ";
		int i = n - 1;
		while (i > 0 && a[i] > a[i + 1]) {
			i--;
		}
		if (i == 0) {
			return;
		}
		int k = n;
		while (a[i] > a[k]) {
			k--;
		}
		swap(a[i], a[k]);
		int l = i + 1, r = n;
		while (l < r) {
			swap(a[l], a[r]);
			l++;
			r--;
		}
	}
}
int main() {
	int t;
//	ifstream fin("46.txt", ios::in);
	fin >> t;
	while (t--) {
		int n;
		fin >> n;
		hvi(n);
	}
//	system("pause");
	return 0;
}
