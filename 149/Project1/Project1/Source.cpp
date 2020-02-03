#include<iostream>
#include<set>
#include<fstream>
#include<string>
#include<ctype.h>
#define cin fin
using namespace std;

int main() {
	ifstream fin("149.txt", ios::in);
	int t;
	cin >> t;
	while (t--) {
		string s;
		int k;
		cin >> s >> k;
		set<char> str;
		for (int i = 0; i < s.size(); ++i) {
			str.insert(tolower(s[i]));
		}
		cout << (str.size() + k >= 26 ? 1 : 0) << endl;
	}
	system("pause");
	return 0;
}
