#include <bits/stdc++.h>
using namespace std;
void ch_name(string &s)
	{
		for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);
		stringstream ss(s);
		string tmp;
		vector <string> v;
		while(ss>>tmp){
			tmp[0]=toupper(tmp[0]);
			v.push_back(tmp);
		} 
		
		for(int i=0;i<v[v.size()-1].length();i++) { // chuan hoa phan ten
			v[v.size()-1][i]=toupper(v[v.size()-1][i]);
		}
		
		for(int i=0;i<v.size();i++)//cach 1
			{
				if(i==v.size()-2) v[i]+=',';
				cout<<v[i]<<" ";
			}
		cout<<endl;
		
		v[v.size()-2].pop_back();//cach 2
		cout<<v[v.size()-1]+','<<" ";
		for(int i=0;i<v.size()-1;i++) cout<<v[i]<<" ";
	}

int main()
	{
		string name;
		getline(cin,name);
		ch_name(name);
	}
