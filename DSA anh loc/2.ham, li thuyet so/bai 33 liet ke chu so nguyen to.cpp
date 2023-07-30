#include <bits/stdc++.h>
using namespace std;
map <int, int> m;
int b[30];// mang danh dau 

void solve(long long n)
{
	string s=to_string(n);
	for(int i=0;i<s.size();i++){
		if(s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='7') m[s[i]-'0']++;
		if(s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='7') b[s[i]-'0']++;
	}
	for(auto &i: m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	for(int i=0;i<s.size();i++){
		if(b[s[i]-'0']!=0)
			{
				cout<<s[i]-'0'<<" "<<b[s[i]-'0']<<endl;
				b[s[i]-'0']=0;
			}
	}
}
int main()
{
	long long n;
	cin>>n;
	solve(n);
}
