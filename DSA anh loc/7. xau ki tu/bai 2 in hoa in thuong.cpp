#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	
	for(int i=0;i<s.length();i++) // in hoa
		s[i]=toupper(s[i]);
	cout<<s<<endl;
	
	for(int i=0;i<s.length();i++) // in thuong
		s[i]=tolower(s[i]);
	cout<<s;
}

