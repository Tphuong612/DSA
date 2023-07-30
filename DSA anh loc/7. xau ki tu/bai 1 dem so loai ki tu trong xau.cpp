#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	int so=0, chu=0, khac=0;
	for(int i=0;i<s.length();i++) 
		s[i]=tolower(s[i]);
	for(int i=0;i<s.length();i++){
		if(s[i]>='0'&&s[i]<='9') so++;
		else if(s[i]>='a'&&s[i]<='z') chu++;
		else khac++;
	}
	cout<<chu<<" "<<so<<" "<<khac;
}

