#include <bits/stdc++.h>
using namespace std;
bool kogiam(string s)
{
	for(int i=1;i<s.length();i++)
		if(s[i]<s[i-1]) return false;
	return true;
}
bool kotang(string s)
{
	for(int i=1;i<s.length();i++)
		if(s[i]>s[i-1]) return false;
	return true;
}
int main()
{
//	int t;
//	cin>>t;
//	while(t--){
	string n;
	cin>>n;
	
	if(kogiam(n)||kotang(n))cout<<"YES";
	else cout<<"NO";
//	}	
}
