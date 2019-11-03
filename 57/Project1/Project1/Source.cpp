#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

#define fin cin

int compare(string X, string Y)
{
	string XY = X.append(Y);
	string YX = Y.append(X);
	if (XY.compare(YX) > 0)
	{
		return 1;
	}
	return 0;
}
void Largest(vector<string> arr)
{
//	ofstream fout("57.out", ios::app);
	sort(arr.begin(), arr.end(), compare);
	for (int i = 0; i < arr.size(); ++i)
	{
		cout << arr[i];
	}
	cout << endl;
}
int main()
{
	int t, n;
//	ifstream fin("57.txt", ios::in);
	fin >> t;
	while (t--)
	{
		fin >> n;
		vector<string> arr;
		string str;
		for (int i = 0; i < n; ++i)
		{
			fin >> str;
			arr.push_back(str);
		}
		Largest(arr);
	}
//	system("pause");
	return 0;
}
