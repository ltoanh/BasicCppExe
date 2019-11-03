//siggev
#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#define fin cin
#define fout cout
#define ll long long
using namespace std;
#define int long long
main()
{
	ll t, n;
//	ifstream fin("51.txt", ios::in);
//	ofstream fout("51out.txt", ios::out);
	fin >> t;
	while (t--)
	{
		fin >> n;
		vector<ll> b(n+1,0);
		ll x;
		for (ll i = 0; i < n; ++i)
		{
			fin >> x;
			if (x >= 0)
			{
				b[x]++;
			}
		}
		for (ll i = 0; i < n; ++i)
		{
			if (b[i] > 0)
			{
				cout << i << " ";
			}
			else
			{
				cout << -1 << " ";
			}
		}
		cout << endl;
	}
//	system("pause");
}
