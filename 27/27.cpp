//wr
/*
gcd(a,m)=1?a*x+m*y=1;
=>a*x dong du 1(mod m)
x = y1;
y = x1 - (a/b) *  y1;
---
x=1;
y=0;
*/
#include<iostream>
#include<algorithm>
using namespace std;
int gcd_extend(int a, int m, int *x, int *y){
	if(m==0){
		*x=1;
		*y=0;
		return a;
	}
	int x1, y1;
	int gcd= gcd_extend(m, a%m, &x1, &y1);
	*x=y1;
	*y=x1-(a/m)*y1;
	return gcd;
}
int check(int a, int m){
	int x, y;
	if(gcd_extend(a,m,&x,&y)!=1){
		return -1;
	}
	return (x%m + m)%m;
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
