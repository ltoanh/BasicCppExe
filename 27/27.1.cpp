/*
gcd(a,m)=1?a*x+m*y=1;
=>a*x dong du 1(mod m)
*/
#include<iostream>
#include<algorithm>
using namespace std;

int check(int a, int m){
	a = a%m; 
    for (int x=1; x<m; x++) 
       if ((a*x) % m == 1) 
          return x; 
    return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a, m;
		cin>>a>>m;
		cout<<check(a,m)<<endl;
	}
	return 0;
}
