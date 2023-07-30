#include <bits/stdc++.h>
using namespace std;
bool tn(string s)//thuan nghich
{
	for(int i=0;i<s.length()/2;i++)
		if(s[i]!=s[s.length()-1-i]) return false;
	return true;
}
int main()
{
	string n;
	cin>>n;
	
	bool check=false;
	for(int i=0;i<n.length();i++){
		if(n[i]=='6'){
			check=true;
			break;
		}
	}
	if(check&&tn(n))cout<<"YES";
	else cout<<"NO";
}
