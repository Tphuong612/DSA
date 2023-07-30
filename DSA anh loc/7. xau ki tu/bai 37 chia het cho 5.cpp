#include <bits/stdc++.h>
using namespace std;
int main()
{
//	int t;
//	cin>>t;
//	while(t--){
	string s;
	cin>>s;
	int sum=0;
	for(int i=0;i<s.length();i++) sum+=s[i]-'0';
	if(sum%3==0&&(s[s.length()-1]-'0')%5==0) cout<<"YES";
	else cout<<"NO";
//	}
}
