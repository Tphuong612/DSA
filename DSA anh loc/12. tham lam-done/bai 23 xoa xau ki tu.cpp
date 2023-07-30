#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='0') s[i]=' ';
	}
	stringstream ss(s);
	string tmp;
	vector <int> v;
	while(ss>>tmp){
		v.push_back(tmp.length());
	}
	sort(v.begin(), v.end());// do choi toi uu
	int ti=0, teo=0;// ti di trc;
	for(int i=0;i<v.size();i++){
		if(i%2==0) ti+=v[i];
		else teo+=v[i];
	}
	cout<<max(ti, teo);
}
