#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	map<char, int> m;
	for(int i=0;i<s.length();i++) // in thuong
		m[s[i]]++;
	
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	for(int i=0;i<s.length();i++){
		if(m[s[i]]!=0){
			cout<<s[i]<<" "<<m[s[i]]<<endl;
			m[s[i]]=0;
		}
	}
	
}

