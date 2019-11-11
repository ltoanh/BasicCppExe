/*
Difference of 2 large numbers
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool issmaller(string num1, string num2) {
	int len1 = num1.size(), len2 = num2.size();
	if (len1 < len2) {
		return 1;
	}
	if (len1 > len2) {
		return 0;
	}
	for (int i = 0; i < len1; ++i) {
		if (num1[i] < num2[i]) {
			return 1;
		}
		else if (num1[i] > num2[i]) {
			return 0;
		}
	}
	return 0;
}
string sub(string num1, string num2)
{
	if (issmaller(num1, num2)) {
		swap(num1, num2);
	}
	string s = "";
	int len1 = num1.size(), len2 = num2.size();
	int du = 0;
	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());
	for (int i = 0; i < len2; ++i) {
		int sub = (num1[i] - '0') - (num2[i] - '0') - du;
		if (sub < 0) {
			sub += 10;
			du = 1;
		}
		else {
			du = 0;
		}
		s.push_back(sub + '0');
	}
	for (int i = len2; i < len1; ++i) {
		int sub = (num1[i] - '0') - du;
		if (sub < 0) {
			sub += 10;
			du = 1;
		}
		else {
			du = 0;
		}
		s.push_back(sub + '0');
	}
	reverse(s.begin(), s.end());
	return s;
}
int main()
{
	int t;
	string num1, num2;
	cin >> t;
	while (t--)
	{
		cin >> num1 >> num2;
		cout << sub(num1, num2) << endl;
	}
//	system("pause");
	return 0;
}
