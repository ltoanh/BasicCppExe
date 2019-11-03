/*
Sum of 2 large numbers
*/
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
string find_num(string num1, string num2) {
	int len1 = num1.size();
	int len2 = num2.size();
	if (len1 > len2) {
		swap(num1, num2);
		swap(len1, len2);
	}
	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());
	string s = "";
	int du = 0;
	for (int i = 0; i < len1; ++i) {
		int temp = (num1[i] - '0' + num2[i] - '0' + du);
		s.push_back(temp % 10 + '0');
		du = temp / 10;
//		cout << temp << " " << du << endl;
	}
	for (int i = len1; i < len2; ++i) {
		int temp = (num2[i] - '0' + du);
		s.push_back(temp % 10 + '0');
		du = temp / 10;
//		cout << temp << " " << du << endl;
	}
	if (du > 0) {
		s.push_back(du + '0');
	}
	reverse(s.begin(), s.end());
	return s;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string num1, num2;
		cin >> num1 >> num2;
		cout << find_num(num1, num2) << endl;
	}
//	system ("pause");
	return 0;
}
