#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
	return a>b;
}
int main()
{
	string s;
	getline(cin, s);
	
	for(int i=0;i<s.length();i++){//viet thuong xau de tach
//		s[i]=tolower(s[i]);
		if(s[i]<'0'||s[i]>'9') s[i]=' ';
	}
	stringstream ss(s);// tach
	string tmp;
	vector <string> v;// tao vector de chua cac string sau khi tach
	while(ss>>tmp){
		while(tmp[0]=='0') tmp.erase(0,1);//xoa chu so 0 o dau
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), cmp);// sap xep theo thu tu tu dien tang dan
	string kq="";
	for(auto i: v){// ghep xau
		if(kq+i>i+kq) kq=kq+i;
		else kq=i+kq;
	}
	cout<<kq;
}
