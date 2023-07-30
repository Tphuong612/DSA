#include <bits/stdc++.h>
using namespace std;
long long min(long long a)
{
	string s=to_string(a);
	for(int i=0;i<s.size();i++)
		if(s[i]=='6') s[i]='5';
	return stoll(s);
}
long long max(long long a)
{
	string s=to_string(a);
	for(int i=0;i<s.size();i++)
		if(s[i]=='5') s[i]='6';
	return stoll(s);
}
int main()
{
	int t=1;
//	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		cout<<max(a)+max(b)<<" "<<min(a)+min(b);
	}
}
