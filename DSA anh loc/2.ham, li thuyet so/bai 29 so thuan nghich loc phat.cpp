#include <bits/stdc++.h>
using namespace std;
int tn(int n)
{
	string s=to_string(n);
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]) return 0;
	}
	return 1;
}
int check6(int n)
{
	string s=to_string(n);
	for(int i=0;i<s.size();i++){
		if(s[i]=='6') return 1;
	}
	return 0;
}
int checktc(int n)
{
	int sum=0;
	string s=to_string(n);
	for(int i=0;i<s.size();i++){
		sum+=s[i]-'0';
	}
	if(sum%10==8) return 1;
	else return 0;
}
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
		if(tn(i)&&check6(i)&&checktc(i)) cout<<i<<" ";
}
