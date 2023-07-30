#include <bits/stdc++.h>
using namespace std;
int main()
	{
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		vector <string> v;
		map<string, int> m;
		while(ss>>tmp){
			m[tmp]++;
			v.push_back(tmp);
		}
		
		for(auto x:m){// duyet map
			cout<<x.first<<" "<< x.second<<endl;
		}
		cout<<endl;
		for(auto x:v){// in theo thu tu xuat hien
			if(m[x]!=0){
				cout<<x<<" "<<m[x]<<endl;
				m[x]=0;
			}
		}
		
		
	}
