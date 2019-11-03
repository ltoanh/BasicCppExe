/* X x Y 
X, Y large */

#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;
string mul(string num1, string num2) {
	int len1 = num1.size();
	int len2 = num2.size();
	if (len1 == 0 || len2 == 0)
	{
		return "0";
	}
	int vt_n1=0, vt_n2 = 0;
	vector<int> result(len1 + len2, 0);
	for (int i = len1 - 1; i >= 0; --i)
	{
		int carry = 0;
		int n1 = num1[i] - '0';
		int vt_n2 = 0;
		for (int j = len2 - 1; j >= 0; --j)
		{
			int n2 = num2[j] - '0';
			int sum = n1 * n2 + result[vt_n1 + vt_n2] + carry;
			result[vt_n1 + vt_n2] = sum / 10;
			carry = sum % 10;
			vt_n2++;
		}
		if (carry > 0)
		{
			result[vt_n1 + vt_n2] += carry;
		}
		vt_n1++;
	}
	string s = "";
	int i = result.size() - 1;
	while (i >= 0 && result[i] == 0)
	{
		i--;
	}
	if (i == -1)
	{
		return "0";
	}
	while (i >= 0)
	{
		s += result[i--] + '0';
	}
	return s;
}
int main() {
	int t;
	string num1, num2;
	ifstream fin("39.in", ios::in);
	fin >> t;
	cout << t << endl;
	while (t--) {
		fin >> num1 >> num2;
		cout << mul(num1, num2);
	}
	system("pause");
	return 0;
}
