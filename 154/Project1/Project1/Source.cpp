#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
string find_sum(string num1, string num2, int x) {
	if (x == 5) {
		for (int i = 0; i < num1.size(); ++i) {
			if (num1[i] == '6') {
				num1[i] = '5';
			}
		}
		for (int i = 0; i < num2.size(); ++i) {
			if (num2[i] == '6') {
				num2[i] = '5';
			}
		}
	}
	else if (x == 6) {
		for (int i = 0; i < num1.size(); ++i) {
			if (num1[i] == '5') {
				num1[i] = '6';
			}
		}
		for (int i = 0; i < num2.size(); ++i) {
			if (num2[i] == '5') {
				num2[i] = '6';
			}
		}
	}
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
	}
	for (int i = len1; i < len2; ++i) {
		int temp = (num2[i] - '0' + du);
		s.push_back(temp % 10 + '0');
		du = temp / 10;
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
		cout << find_sum(num1, num2, 5) << " " << find_sum(num1, num2, 6) << endl;
	}
	system("pause");
	return 0;
}