#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char a[n][m];// nhap
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	string s="";// noi xau
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) s+=a[i][j];
		s+=" ";
	}
	for(int i=0;i<s.length();i++){
		if(s[i]!='#') s[i]=' ';
	}
	stringstream ss(s);
	string tmp;
	int dem=0;
	while(ss>>tmp){
		dem++;
	}
	cout<<dem;
}
