#include <bits/stdc++.h>
using namespace std;
void ch_name(string &s)
	{
		for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);
		stringstream ss(s);
		string tmp;
		while(ss>>tmp){
			tmp[0]=toupper(tmp[0]);
			cout<<tmp<<" ";
		}
		cout<<endl;
	}
void ch_date(string &s)
	{
		if(s[2]!='/') s='0'+s;
		if(s[5]!='/') s.insert(3,"0");
		cout<<s;
	}
int main()
	{
		string name, date;
		getline(cin,name);
		getline(cin, date);
		ch_name(name);
		ch_date(date);
	}
