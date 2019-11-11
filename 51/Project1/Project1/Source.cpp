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
	int t, n;
	fin >> t;
	while (t--)
	{
		fin >> n;
		vector<ll> b(n+7,0);
		ll x;
		for (ll i = 0; i < n; ++i)
		{
			fin >> x;
			if (x >= 0 && x<=n) //note
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
}
