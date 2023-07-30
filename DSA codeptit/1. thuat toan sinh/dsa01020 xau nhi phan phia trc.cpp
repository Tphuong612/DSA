#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		int i=a.length()-1;
		while(a[i]=='0'){
			a[i]='1';
			i--;
		}
		if(a[i]=='1'&&i>=0) a[i]='0';
		cout<<a<<endl;
		
	}
}
