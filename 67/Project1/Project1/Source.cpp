#include<bits/stdc++.h>
#define ll long long
using namespace std;
int t;
string n;

void odd(int a[],int flag, string s){
	int pos=-1, sl=-1;
	for(int i=9; i>=flag; --i){
		if(a[i]&1){
			if(a[i]>sl){
				sl=a[i];
				pos=i;
			}
		}
	}
	/* TH chi co cs 0: 00000 */
	if(pos==-1 && sl==-1){
		cout<<n;
		return;
	}
	int m;
	bool check=0;
	/* co so co sl odd */
	if(sl!=-1 && pos!=-1){
		m=sl/2;
		check=1;
		while(m--)	s+=(pos+'0');
	}
	cout<<s;
	reverse(s.begin(), s.end());
	if(check) cout<<pos;
	cout<<s;
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		string s="";
		int a[10]={0};
		for(int i=0; i<n.size(); ++i) a[n[i]-'0']++;
		int flag=1;
		for(int i=9; i>=0; --i){
			//TH: 010 1001
			if(a[i]!=0 && a[i]%2==0){
				if(i==0 && flag){
					flag=0;
					break;
				}
				flag=0;
				a[i]/=2;
				while(a[i]--) s+=(i+'0');
			}
		}
		odd(a,flag,s); cout<<endl;
	}
}

