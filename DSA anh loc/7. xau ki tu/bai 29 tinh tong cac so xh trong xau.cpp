#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	
	for(int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
		if(s[i]>='a'&&s[i]<='z') s[i]=' ';
	}
	stringstream ss(s);
	string tmp;

	long long sum=0;
	while(ss>>tmp){
		long long x=stoll(tmp);
		sum+=x;
	}
	cout<<sum;
}
