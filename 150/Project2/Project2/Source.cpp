#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
#define cin fin
using namespace std;

int main() {
	ifstream fin("150.txt", ios::in);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int odd, even;
		odd = even = 0;
		for (int i = 0; i < s.size(); ++i) {
			(i & 1 ? odd : even) += s[i]-'0';
		}
		cout << (abs(odd - even) % 11 ? 0 : 1);
		cout << endl;
	}
	system("pause");
	return 0;
}