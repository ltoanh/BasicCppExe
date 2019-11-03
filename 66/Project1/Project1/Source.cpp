#include<iostream>
#include<algorithm>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

#define cout fout

int main() {
	int t;
	string n;
	ifstream fin("66.txt", ios::in);
	ofstream fout("66out.txt", ios::out);
	fin >> t;
	while (t--) {
		fin >> n;
		int index = -1;
		for (int i = 0; i < n.size()-2; ++i) {
			if (n[i] > n[i + 1]) {
				index = i;
				break;
			}
		}
		if (index < 0) {
			cout << -1 << endl;
		}
		else {
			int k = -1;
			for (int i = n.size() - 1; i > index; --i) {
				if (n[i] < n[index]) {
					if (k == -1) {
						k = i;
					}
					else if (n[i] >= n[k]) {
						k = i;
					}
				}
			}
			if (index == 0 && n[k] == '0') { //chu y test nay
				cout << -1 << endl;
			}
			else {
				swap(n[k], n[index]);
				cout << n << endl;
			}
		}
	}
	system("pause");
	return 0;
}