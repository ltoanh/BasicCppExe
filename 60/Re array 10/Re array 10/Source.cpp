#include<iostream>
#include<stack>
#include<string>

using namespace std;

void Solve(string a) {
	stack<int> st;
	for (int i = 0; i <= a.size(); ++i) {
		if (a[i] == 'I' || i == a.size()) {
			cout << i + 1;
			while (!st.empty()) {
				cout << st.top();
				st.pop();
			}
		}
		else if (a[i] == 'D') {
			st.push(i + 1);
		}
	}
	cout << endl;
}
int main() {
	int t; 
	cin >> t;
	while (t--) {
		string a;
		cin >> a;
		Solve(a);
	}
	system("pause");
	return 0;
}