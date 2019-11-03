/*
	1) Move elements of top row.
	2) Move elements of last column.
	3) Move elements of bottom row.
	4) Move elements of first column.
*/
#include<iostream>
#include<fstream>
#define cout fout
using namespace std;
void rotate_matrix(int a[107][107], int n, int m) {
	ofstream fout("128out.txt", ios::app);
	int C = m, R = n;
	int col = 0, row = 0;
	while (col < n && row < m) {
		if (col + 1 == n || row + 1 == m) {
			break;
		}
		int prev = a[row + 1][col];
		for (int i = col; i < m; ++i) {
			int curr = a[row][i];
			a[row][i] = prev;
			prev = curr;
		}
		row++;
		for (int i = row; i < n; ++i) {
			int curr = a[i][m - 1];
			a[i][m - 1] = prev;
			prev = curr;
		}
		m--;
		if (row < n) {
			for (int i = m - 1; i >= col; --i) {
				int curr = a[n - 1][i];
				a[n - 1][i] = prev;
				prev = curr;
			}
		}
		n--;
		if (col < m) {
			for (int i = n - 1; i >= row; --i) {
				int curr = a[i][col];
				a[i][col] = prev;
				prev = curr;
			}
		}
		col++;
	}
	for (int i = 0; i < R; ++i) {
		for (int j = 0; j < C; ++j) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
int main() {
	int t;
	ifstream fin("128.txt", ios::in);
	fin >> t;
	while (t--) {
		int n, m;
		int a[107][107];
		fin >> n >> m;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				fin >> a[i][j];
			}
		}
		rotate_matrix(a, n, m);
	}
	system("pause");
	return 0;
}