#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	set <char> se;
	for(int i=0;i<s.length();i++) // in thuong
		{
			s[i]=tolower(s[i]);;
			se.insert(s[i]);
		}
	if(se.size()!=26) cout<<"NO";
	else cout<<"YES";
}

