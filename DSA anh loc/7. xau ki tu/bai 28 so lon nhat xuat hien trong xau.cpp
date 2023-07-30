#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
	if(a.length()==b.length()) return a<b;
	return a.length()<b.length();
}
int main()
{
	string s;
	getline(cin, s);
	
	for(int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
		if(s[i]>='a'&&s[i]<='z') s[i]=' ';
	}
	stringstream ss(s);
	string tmp;
	vector <string> v;
	while(ss>>tmp){
		int dem=0;
		for(int i=0;i<tmp.length();i++) {
			if(tmp[i]=='0') dem++;
		}
		if(dem==tmp.length()){
			v.push_back("0");
		}

	
		while(tmp[0]=='0') tmp.erase(0,1);
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), cmp);
//	for(auto i: v) cout<<i<<" ";
	cout<<v[v.size()-1];
}
