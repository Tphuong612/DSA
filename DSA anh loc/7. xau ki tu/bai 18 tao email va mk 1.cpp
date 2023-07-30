#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	map<string, int> m;// dem tan suat xh
	for(int k=1;k<=n;k++)
	{
		string s;
		getline(cin, s);
		for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
		stringstream ss(s);
		string tmp;
		vector <string> v;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		
		string tdn=v[v.size()-2];// tao tdn
		for(int i=0;i<v.size()-2;i++) tdn+=v[i][0];
		  
		m[tdn]++;
		
//		cout<<m[tdn]<<endl;
		if(m[tdn]>1) tdn+=to_string(m[tdn]);
		tdn+="@xyz.edu.vn";
		cout<<tdn<<endl;
		
		string date=v[v.size()-1];//tao mk
		for(int i=0;i<date.size();i++) 
			if(date[i]=='/') date[i]=' ';
		stringstream kk(date);
		string tach;
		string mk="";
		while(kk>>tach){
			if(tach[0]=='0') tach.erase(0,1);
			mk+=tach;
		}
		cout<<mk<<endl;
	}
}
