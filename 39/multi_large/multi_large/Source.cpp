/*
X*Y
with X, Y is large

VD: 478*277; // X*Y
X=0;
X1=X;
X2=X+X=X1+X;
X3=X+X+X=X2+X;
.
.
.
X9=X+...+X=X8+X;

487*277 =
X*Y = X7*10^0+X7*10+X2*10^2;
*/

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

#define ll long long

using namespace std;
/*Tinh tong 2 so nguyen lon */
string sum(string X, string Y) {
	int len1 = X.size(), len2 = Y.size();
	if (len1 < len2) {
		swap(X, Y);
		swap(len1, len2);
	}
	int du = 0;
	string s = "";
	reverse(X.begin(), X.end());
	reverse(Y.begin(), Y.end());
	for (int i = 0; i < len2; ++i) {
		int temp = (X[i] - '0' + Y[i] - '0') + du;
		du = temp / 10;
		s.push_back(temp % 10 + '0');
	}
	for (int i = len2; i < len1; ++i) {
		int temp = (X[i] - '0') + du;
		du = temp / 10;
		s.push_back(temp % 10 + '0');
	}
	if (du > 0) {
		s.push_back(du + '0');
	}
	reverse(s.begin(), s.end());
	return s;
}
string mul(string Y, string X){
	vector<string> a(10, "0");
	for (int i = 1; i < 10; ++i) {
		a[i] = sum(a[i - 1], X);
	}
	string mul = "0";
	reverse(Y.begin(), Y.end());
	for (int i = 0; i < Y.size(); ++i) {
		string temp = a[Y[i] - '0'];
		for (int j = 1; j <= i; ++j) {
			temp += '0';
		}
		mul = sum(temp, mul);
	}
	return mul;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string X, Y;
		cin >> X >> Y;
		string kq = mul(Y,X);
		cout << kq << endl;
	}
	//	system("pause");
	return 0;
}
