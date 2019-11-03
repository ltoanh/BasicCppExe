#include<iostream>
#include<fstream>
#include<vector>
#define cout fout
using namespace std;
int main() {
	int t;
	ifstream fin("73.txt", ios::in);
	ofstream fout("73out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, hieu_max = 0;
		vector<int> a;
		fin >> n;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.push_back(x);
		}
		/*
		for (int i = 0; i < n; ++i) {
			cout << a.at(i) << " ";
		}
		cout << endl;
		*/
		int left = 0, right = n - 1;
		while (left <= right) {
			if (a[left] <= a[right]) {
				hieu_max = right - left;
				break;
			}
			left++;
			right--;
		}
		cout << hieu_max << endl;
	}
	system("pause");
	return 0;
}