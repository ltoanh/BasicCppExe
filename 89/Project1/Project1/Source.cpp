#include<iostream>
#include<fstream>
#define cout fout
using namespace std;

int main() {
	int t;
	ifstream fin("89.txt", ios::in);
	ofstream fout("89out.txt", ios::out);
	fin >> t;
	while (t--) {
		int n, k, a[1007];
		fin >> n >> k;
		for (int i = 1; i <= n; ++i) {
			fin >> a[i];
		}
		float sum = INT_MIN;
		int vt = 1;
		for (int i = 1; i <= n - k + 1; ++i) {
			float s = 0;
			for (int j = i; j < i + k; ++j) {
				s += a[j];
			}
			s /= k;
			if (s > sum) {
				sum = s;
				vt = i;
//				cout << sum << " " << vt << endl;
			}
		}
//		cout << endl;
		for (int i = vt; i < vt + k; ++i) {
			cout << a[i] << " ";
		}
		cout << endl;	
	}
	system("pause");
	return 0;
}