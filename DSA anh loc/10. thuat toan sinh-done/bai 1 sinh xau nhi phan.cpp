#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int i=a.length()-1;
	while(a[i]=='1'){
		a[i]='0';
		i--;
	}	
	if(a[i]=='0'&&i>=0) a[i]='1';
	cout<<a;
}
