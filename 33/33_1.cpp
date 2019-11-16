#include<bits/stdc++.h>
#define int long long
using namespace std;

main(){
    int t;
    cin>>t;
    while(t--){
        int b, p;
        cin>>b>>p;
        int k=0;
        for(int i=1; i<=p; ++i){
            if((i*i)%p==1){
                k++;
            }
        }
        int k1=0;
        for(int i=1; i<=b%p; ++i){
            if((i*i)%p==1){
                k1++;
            }
        }
        cout<<(long long)k*(b/p)+k1<<endl;
    }
}
