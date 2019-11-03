#include<iostream>
#include<fstream>
#include<vector>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("130.txt", ios::in);
	ofstream fout("130out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, m;
		vector<int> a;
		fin >> n >> m;
		for (int i = 0; i < n*m; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
		}
		int n1 = n, m1 = m;
		int mat[107][107], k = 0, col = 0, row = 0;
		while (col < n && row < m) {
			for (int i = col; i < m; ++i) {
				mat[row][i] = a[k++];
			}
			row++;
			for (int i = row; i < n; ++i) {
				mat[i][m-1] = a[k++];
			}
			m--;
			if (row < n) {
				for (int i = m - 1; i >= col; --i) {
					mat[n - 1][i] = a[k++];
				}
			}
			n--;
			if (col < m) {
				for (int i = n - 1; i >= row; --i) {
					mat[i][col] = a[k++];
				}
			}
			col++;
		}
		for (int i = 0; i < n1; ++i) {
			for (int j = 0; j < m1; ++j) {
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}