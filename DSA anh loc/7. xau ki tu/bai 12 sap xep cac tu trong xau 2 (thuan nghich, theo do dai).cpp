#include <bits/stdc++.h>
using namespace std;
bool tn(string a)// thuan nghich
	{
		int len=a.length();
		for(int i=0;i<len/2;i++)
			if(a[i]!=a[len-1-i]) return false;
		return true;
	}
bool cmp(string a, string b)
	{
		return a.length()<b.length();
	}
	
int main()
	{
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;

		vector <string> v;
		map<string, int> m;
		while(ss>>tmp){
			
			if(tn(tmp)){
				m[tmp]++;
				if(m[tmp]==1) v.push_back(tmp);
			}
		}
		
		stable_sort(v.begin(), v.end(), cmp);
		for(auto x:v) cout<<x<<" ";
		
		
	}
