#include <bits/stdc++.h>
using namespace std;
bool check(string s, int l, int r){
	while(l<r){
		if(s[l]!=s[r]) return false;
		l++;
		r--;
	}
	return true;
}
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int m;
	cin>>m;
	while(m--){
		int l, r;
		cin>>l>>r;
		if(check(s, l-1, r-1)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
