#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int dem=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==')') dem--;
		else dem++;
		if(dem<0) dem++;// xu li dua ve cuoi day
	}
	cout<<dem;
}
