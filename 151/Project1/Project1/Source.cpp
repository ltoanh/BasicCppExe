/*
So tu nhien N bieu dien duoi dang nhi phan
Ktra N%5==0?
-------------------------------------------
B1: Chuyen he nhi phan sang he 4
B2: N.size()&1? '0' + N
B3: Tinh hieu cua  tong cac vi tri le vs tong cac vi tri chan
B4: Hieu % 5 ? "No" : "Yes"
*/
#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
#define cin fin
using namespace std;
int base4(string s) {
	if (s.compare("00") == 0) {
		return 0;
	}
	if (s.compare("01") == 0) {
		return 1;
	}
	if (s.compare("10") == 0) {
		return 2;
	}
	return 3;
}
int main() {
	ifstream fin("151.txt", ios::in);
	int t;
	cin >> t;
	while (t--) {
		string bi;
		cin >> bi;
		int tp = 1, odd, even;
		odd = even = 0;
		if (bi.size() & 1) {
			bi = '0' + bi;
		}
		for (int i = 0; i < bi.size(); i += 2) {
			(tp ? odd : even) += base4(bi.substr(i, 2));
			tp ^= 1;
		}
		cout << (abs(odd - even) % 5 ? "No" : "Yes") << endl;
	}
	system("pause");
	return 0;
}