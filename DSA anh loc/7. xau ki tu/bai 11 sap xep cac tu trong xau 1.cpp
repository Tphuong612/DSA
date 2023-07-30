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
	stringstream ss(s);
	string tmp;
	vector <string> v;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	
	sort(v.begin(), v.end());// theo thu tu tu dien
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	cout<<endl;
	
	sort(v.begin(), v.end(), cmp);// theo do dai xau
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}
