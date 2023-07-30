#include <bits/stdc++.h>
using namespace std;
int check(long long n)
{
	string s=to_string(n);
	for(int i=0;i<s.size();i++)
		if(s[i]!='0'&&s[i]!='6'&&s[i]!='8') return 0;
	return 1;
}
int main()
{
	long long n;
	cin>>n;
	if(check(n)) cout<<"1";
	else cout<<"0";
}
