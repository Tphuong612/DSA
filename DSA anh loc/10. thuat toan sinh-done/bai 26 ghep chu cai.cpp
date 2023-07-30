#include <bits/stdc++.h>
using namespace std;
bool check(char c)// kiem tra xem do co phai ki tu A, E hay ko
{
	return (c=='A'||c=='E');
}
bool ok(string s)
{
	for(int i=0;i<s.length();i++){
		if(check(s[i])){
			if(i==0||i==s.length()-1) continue;
			if(!check(s[i-1])&&!check(s[i+1])) return false;
		}
	}
	return true;
}
string p="";
int main()
{
	char c;
	cin>>c;
	string s="ABCDEFGH";
	int n=c-'A'+1;
	for(int i=0;i<n;i++) p+=s[i];
//	for(int i=0;i<v.size();i++) cout<<v[i];
	do{
		if(ok(p)) cout<<p<<endl;
	}
	while(next_permutation(p.begin(), p.end()));
}
