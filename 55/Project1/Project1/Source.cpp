#include<iostream>
#include<algorithm>
#include<fstream>

#define fin cin

using namespace std; 

int main() {
	int t, n;
//	ifstream fin("55.txt", ios::in);
//	ofstream fout("55.out", ios::out);
	fin >> t;
	while (t--) {
		fin >> n;
		int a[1007];
		for (int i = 1; i <= n; ++i)
		{
			fin >> a[i];
		}
		sort(a + 1, a + n + 1);
		reverse(a + 1, a + n + 1);
		int b[1007];
		int tm = n / 2 + (n % 2 != 0 ? 1 : 0);
		for (int i = 1, j = 1; i <= tm, j <= n; ++i, j+=2)
		{
			b[j] = a[i];
		}
		for (int i = n, j = 2; i > tm, j <= n; --i, j += 2)
		{
			b[j] = a[i];
		}
		for (int i = 1; i <= n; ++i)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}
//	system("pause");
	return 0;
}
