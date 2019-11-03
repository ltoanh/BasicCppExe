//note
//XET TH nhieu so giong nhau
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<fstream>
#define cout fout
using namespace std;

int main() {
	int t, n;
	ifstream fin("81.txt", ios::in);
	ofstream fout("81out.txt", ios::out);
	fin >> t;
	while (t--) {
		fin >> n;
		vector< pair<int, int> > a;
		for (int i = 0; i < n; ++i) {
			int x;
			fin >> x;
			a.push_back({ x,i });
		}
		sort(a.begin(), a.end());
		/*
		for (int i = 0; i < a.size(); ++i) {
			cout << a[i].first << " ";
		}
		cout << endl;
		*/
		int M = a[a.size() - 1].first;
		for (int i = 0; i < a.size() - 1; ++i) {
			if (a[i].first == M) {
				a[i].first = M + 1;
				continue;
			}
			for (int j = i + 1; j < a.size(); ++j) {
				if (a[i].first != a[j].first) {
					a[i].first = a[j].first;
					break;
				}
			}
		}
		a[a.size() - 1].first = M + 1;
		/*
		for (int i = 0; i < a.size(); ++i) {
			cout << a[i].first<<" ";
		}
		cout << endl;
		*/
		sort(a.begin(), a.end(), [](auto &left, auto &right) {
			return left.second < right.second;
		});
		for (int i = 0; i < a.size(); ++i) {
			if (a[i].first == M + 1) {
				cout << "_" << " " ;
			}
			else {
				cout << a[i].first << " ";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}