/*So doi xung lon nhat*/
#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#define MAX 10
#define cout fout
using namespace std;
inline string all_odd(int F[]) {
	string str;
	int sl = 0, vt = -1;
	for (int i = 1; i < MAX; ++i) {
		if (F[i] > sl) {
			sl = F[i];
			vt = i;
		}
		else if (F[i] == sl) {
			if (i > vt) {
				vt = i;
			}
		}
	}
//	cout << vt << " " << sl << endl;
	str.append(F[vt], vt + '0');
	return str;
}
inline string num_max(int F[], int vt_odd_max) {
	string str;
	//noi cac chu so tu 9->0 vao str
	for (int i = 9; i >= 0; --i) {
		if (F[i] && F[i] % 2 == 0) {
			str.append(F[i] / 2, i + '0');
		}
		if (i == vt_odd_max && F[i] > 1) {
			str.append(F[i] / 2, i + '0');
		}
	}
	//noi chu so co so lan xh le nhieu nhat vao giua
	if (F[vt_odd_max] >= 1) {
		str.append(1, vt_odd_max + '0');
	}
	string temp = str;
	for (int i = temp.size() - 1; i >= 0; --i) {
		str.append(1, temp[i]);
	}
	return str;
}
inline string ctr(string n) {
	int F[MAX] = { 0 };
	//dem so luong cac chu so
	for (int i = 0; i < n.size(); ++i) {
		F[n[i]-'0']++;
	}
	//dem so cac chu so co so luong le
	//tim chu so lon nhat co so lan xuat hien le
	int sl_odd = 0, vt_odd_max = 0, gt_odd_max = 0, sl_pt=0;
	for (int i = 0; i < MAX; ++i) {
		if (F[i]) {
			sl_pt++;
			if (F[i] % 2) {
				sl_odd++;
				if (gt_odd_max > F[i]) {
					gt_odd_max = F[i];
					vt_odd_max = i;
				}
			}
		}
	}
	/*
	for (int i = 0; i < MAX; ++i) {
		if (F[i]) {
			cout << i << " " << F[i] << endl;
		}
	} */
//	cout << sl_pt << " " << sl_odd << endl;
	//TH so luong cac chu so deu le
	if (sl_odd == sl_pt) {
		return all_odd(F);
	}
	//TH co odd va even || chi even
	return num_max(F, vt_odd_max);
}
int main() {
	int t;
	string n;
	ifstream fin("67.txt", ios::in);
	ofstream fout("67out.txt", ios::out);
	fin >> t;
	while (t--) {
		fin >> n;
		cout<<ctr(n)<<endl;
	}
	system("pause");
	return 0;
}