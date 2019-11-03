#include<iostream>
#include<string>
#include<fstream>
#define cin fin
using namespace std;

int main() {
	ifstream fin("150.txt", ios::in);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int du = 0;
		for (int i = 0; i < s.size(); ++i) {
			du = (du * 10 + s[i] - '0') % 11;
		}
		cout << (du ? 0 : 1);
		cout << endl;
	}
	system("pause");
	return 0;
}