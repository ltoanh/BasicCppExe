#include<iostream>
#include<algorithm>
#include<fstream>
#include<vector>
#include<time.h>

using namespace std;

#define cout fout

int main() {
	int t;
	int n, k;
	ifstream fin("64.txt", ios::in);
	ofstream fout("64out.txt", ios::out);
	fin >> t;
	while (t--) {
		fin >> k >> n;
		vector< vector<int> > a;
		vector<int> b;
		a.resize(k);
		for(int i=0; i<k; ++i){
			a.at(i).resize(n);
		}
		for (int i = 0; i < k; ++i) {
			for (int j = 0; j < n; ++j) {
				fin >> a.at(i).at(j);
			}
		}
//		double start_t=clock();
		k=a.size();
		n=a.at(0).size();
		for (int i = 0; i < k; ++i) {
			for (int j = 0; j < n; ++j) {
				b.push_back(a.at(i).at(j));
			}
		}
		sort(b.begin(), b.end());
//		double end_t=clock();
		for(int i=0; i<b.size(); ++i){
			cout<<b[i]<<" ";
		}
		cout<<endl;
//		double total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
//		cout<<total_t<<endl;
	}
	system("pause");
	return 0;
}
