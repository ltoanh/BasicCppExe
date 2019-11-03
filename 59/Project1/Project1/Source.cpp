#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

#define ll long long 
#define fin cin

int main() {
	int t, n;
//	ifstream fin("59.txt", ios::in);
//	ofstream fout("59.out", ios::out);
	fin >> t;
	while (t--)
	{
		fin >> n;
		vector<ll> A;
		int a;
		for (int i = 0; i < n; ++i)
		{
			fin >> a;
			A.push_back(a);
		}
		vector<ll> B(A);
		for (int i = 1; i < n - 1; ++i)
		{
			B[i] = A[i - 1] * A[i + 1];
		}
		B[0] = A[0] * A[1];
		B[n - 1] = A[n - 1] * A[n - 2];
		for (int i = 0; i < n; ++i)
		{
			cout << B[i] << " ";
		}
		cout << endl;
	}
//	system("pause");
	return 0;
}
