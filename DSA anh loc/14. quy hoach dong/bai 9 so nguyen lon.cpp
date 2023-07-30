#include <bits/stdc++.h>// day con chung dai nhat
using namespace std;
int f[1005][1005]={0};
int main()
{
	string s1, s2;
	cin>>s1>>s2;
	int n=s1.length(), m=s2.length();
	s1='%'+s1; s2='$'+s2;
	memset(f, 0, sizeof(f));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(s1[i]==s2[j]) f[i][j]=max({f[i-1][j-1]+1, f[i-1][j], f[i][j-1]});
			else f[i][j]=max(f[i-1][j], f[i][j-1]);
		}
	}
	cout<<f[n][m];
}
