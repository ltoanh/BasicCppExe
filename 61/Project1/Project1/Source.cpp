/* find length of the longest bitonic subarray */
#include<iostream>
#include<fstream>
#include<algorithm>

using namespace std;

#define fin cin

int bitonic(int arr[], int n)
{
	int inc[107], dec[107];
	int i, M;
	inc[0] = 1;
	dec[n - 1] = 1;
	//construct increasing sequence array
	for (i = 1; i < n; ++i)
	{
		inc[i] = (arr[i] >= arr[i - 1] ? inc[i - 1] + 1 : 1);
	}
	//construct decreasing sequence array
	for (int i = n - 2; i >= 0; --i)
	{
		dec[i] = (arr[i] >= arr[i + 1] ? dec[i + 1] + 1 : 1);
	}
	//find maxium length bitonic sequence
	M = inc[0] + dec[0] - 1;
	for (int i = 1; i < n; ++i)
	{
		M = max(inc[i] + dec[i] - 1, M);
	}
	return M;
}
int main()
{
	int t, n;
//	ifstream fin("61.txt", ios::in);
//	ofstream fout("61out.txt", ios::out);
	fin >> t;
	while (t--)
	{
		fin >> n;
		int arr[107];
		for (int i = 0; i < n; ++i)
		{
			fin >> arr[i];
		}
		cout << bitonic(arr, n)<<endl;
	}
//	system("pause");
	return 0;
}
