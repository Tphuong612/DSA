#include <bits/stdc++.h>
using namespace std;
bool check(string s)// kiem tra tinh doi xung
{
	for(int i=0;i<s.length()/2;i++)
		if(s[i]!=s[s.length()-1-i]) return false;
	return true;
}
int main()
{
	string s;
	getline(cin, s);
	
	if(check(s)) cout<<"YES";
	else cout<<"NO";
}

