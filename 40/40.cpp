/*
very large X divide at a very large Y
(X/Y)
**************************************
VD: 123456/567
Y0=0;
Y1=Y=567;
Y2=Y+Y=Y1+Y=567+567=1134;
Y3=Y+Y+Y=Y2+Y=1134+567=1701;
.
.
.
Y9=Y+Y+...+Y=Y8+Y=5103;
tim vi tri luu y vs TH vd: 1234>Y9 -> return vi tri 9;
return 0

1234/567=2, du=1234-Y2=100;
1005/56=1, du= 1005-Y1=438;
4386/56=7, du=4438-Y7=...;

de bai k noi ro:
-> xet TH so chu so X, Y
-> loai bo chu so 0 du thua
=> 217, du=...;
*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

string loaibo(string s){
	reverse(s.begin(), s.end());
	int dem=0;
	for(int i=s.size()-1; i>=0; --i){
		if(s[i]=='0'){
			dem++;
		}
		else{
			break;
		}
	}
	if(dem==s.size()) return "0";
	else s.resize(s.size()-dem);
	reverse(s.begin(), s.end());
	return s;
}

string sum(string X, string Y) {
	int len1 = X.size(), len2 = Y.size();
	if (len1 < len2) {
		swap(X, Y);
		swap(len1, len2);
	}
	int du = 0;
	string s = "";
	reverse(X.begin(), X.end());
	reverse(Y.begin(), Y.end());
	for (int i = 0; i < len2; ++i) {
		int temp = (X[i] - '0' + Y[i] - '0') + du;
		du = temp / 10;
		s.push_back(temp % 10 + '0');
	}
	for (int i = len2; i < len1; ++i) {
		int temp = (X[i] - '0') + du;
		du = temp / 10;
		s.push_back(temp % 10 + '0');
	}
	if (du > 0) {
		s.push_back(du + '0');
	}
	reverse(s.begin(), s.end());
	return s;
}

string sub(string num1, string num2){
	string s = "";
	int len1 = num1.size(), len2 = num2.size();
	int du = 0;
	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());
	for (int i = 0; i < len2; ++i) {
		int sub = (num1[i] - '0') - (num2[i] - '0') - du;
		if (sub < 0) {
			sub += 10;
			du = 1;
		}
		else {
			du = 0;
		}
		s.push_back(sub + '0');
	}
	for (int i = len2; i < len1; ++i) {
		int sub = (num1[i] - '0') - du;
		if (sub < 0) {
			sub += 10;
			du = 1;
		}
		else {
			du = 0;
		}
		s.push_back(sub + '0');
	}
	int dem=0;
	//loai bo chu so 0 vo nghia
//	cout<<s<<" ";
	reverse(s.begin(), s.end());
	s=loaibo(s);
//	cout<<dem<<endl;
//	cout<<s<<endl;
	return s;
}

int sochia(string x, vector<string> a){
    int vt = 0;
    int len=x.size();
//    cout<<x<<" "<<len<<endl;
    for (int i = 1; i < 10; ++i) {
 //   	cout<<a[i]<<" "<<a[i].size()<<endl;
		if(a[i].size()>len){
			return i-1;
		}
		if(a[i].size()==len){
			if(a[i]>x){
				return i-1;
			}
			else if(a[i]==x){
				return i;
			}
		}
	}
	if(x>a[9]) return 9;
	return vt;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    	vector<string> a(10, "0");
        string X, Y;
	    cin>>X>>Y;
	    X=loaibo(X);
	    Y=loaibo(Y);
        for (int i = 1; i < 10; ++i) {
			a[i] = sum(a[i - 1], Y);
//			cout<<a[i]<<" ";
		}
//		cout<<endl;
		string tmp="";
		string kq="";
		int i=Y.size();
		//vd 12 123
		if(X.size()<Y.size()){
			tmp=X;
			cout<<"0"<<endl;
		}
		else{
			for(int j=0; j<i; ++j){
				tmp+=X[j];
			}
			bool check=1;
			for (int j = 0; j < tmp.size(); ++j) {
				if (tmp[j] < Y[j]) {
					check=0;
					break;
				}
				else if(tmp[j]>Y[j]){
					check=1;
					break;
				}
			}
			if(check==0){
				//vd 123 555
				if(X.size()==Y.size()){
					tmp=X;
				}
				else{
					tmp+=X[i];
					++i;	
				}
			}
//			cout<<tmp<<" ";
			for(int j=i; j<=X.size(); ++j){
				int vt=sochia(tmp,a);
				kq.push_back(vt+'0');
				tmp=sub(tmp, a[vt]);
				tmp+=X[j];
				tmp=loaibo(tmp);
//				cout<<tmp<<" ";
//				cout<<kq<<" ";
			}
			cout<<kq<<endl;	
		} // end of else
    } //end of while
}
