#include<iostream>
#include<map>
#include<fstream>
#define ll long long
#define cout fout
#define fin cin
#define fout cout
using namespace std;

const ll MOD = 1000000007;
map<ll, ll> Fib;

ll fib(ll n){
	if (Fib.find(n) != Fib.end()) {
		return Fib[n];
	}
	Fib[n] = (fib((n + 1) / 2)*fib(n / 2) + fib((n - 1) / 2)*fib((n - 2) / 2)) % MOD;
	return Fib[n];
}

int main() {
	int t;
//	ifstream fin("41.txt", ios::in);
//	ofstream fout("41out.txt", ios::out);
	fin >> t;
	while (t--) {
		ll n;
		fin >> n;
		Fib[0] = Fib[1] = 1;
		cout << fib(n-1) << endl;
	}
//	system("pause");
	return 0;
}
