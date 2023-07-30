#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	map <string, int> m;
	vector <string> v;
	while(ss>>tmp) 
		{
			m[tmp]++;
			v.push_back(tmp);
		}
	for(auto x:m) cout<<x.first<<" ";
	cout<<endl;
	for(auto x:v){
		if(m[x]!=0){
			cout<<x<<" ";
			m[x]=0;
		}
	}
	
}
