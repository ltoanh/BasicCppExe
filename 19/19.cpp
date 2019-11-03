/*k-th prime factor of a given number*/
/*0.04s*/
#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>
#define MAX 10007

using namespace std;
int snt[MAX];
int nto(int n, int k){
	vector <bool> prime(n+1, false); 
    for (int i=2; i<=n; i+=2) 
        snt[i] = 2; 
    for (int i=3; i<=n; i+=2) 
    { 
        if (prime[i] == false) 
        { 
            snt[i] = i; 
            for (int j=i; j*i<=n; j+=2) 
            { 
                if (prime[i*j] == false) 
                { 
                    prime[i*j] = true; 
                    snt[i*j] = i; 
                } 
            } 
        } 
    } 
	
	while(n>1){
		if(k==1){
			return snt[n];
		}
		n/=snt[n];
		k--;	
	}
	return -1;
}
int main(){
	int t;
//	ifstream fin("19.in", ios::in);
//	ofstream fout("19out.txt", ios::out);
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		memset(snt,-1,sizeof(snt));
		cout<<nto(n,k)<<endl;
//		for(int i=0; i<=n; ++i){
//			cout<<snt[i]<<" ";
//		}
	}
	return 0;
}
