#include<iostream>
#include<fstream>
#include<algorithm>
#define fin cin
#define fout cout
using namespace std;

int main() {
	int t, n;
//	ifstream fin("54.txt", ios::in);
//	ofstream fout("54.out", ios::out);
	fin >> t;
	while (t--) {
		fin >> n;
		int a[1007];
		for (int i = 1; i <= n; ++i)
		{
			fin >> a[i];
		}
		for (int i = 2; i <= n; ++i)
		{
			if (i % 2 == 0)
			{
				if (a[i] < a[i - 1])
				{
					swap(a[i], a[i - 1]);
				}
			}
			else
			{
				if (a[i] > a[i - 1])
				{
					swap(a[i], a[i - 1]);
				}
			}
		}
		for (int i = 1; i <= n; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
//	system("pause");
	return 0;
}
