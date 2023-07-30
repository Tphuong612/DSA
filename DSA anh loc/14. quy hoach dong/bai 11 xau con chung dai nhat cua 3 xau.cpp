#include <bits/stdc++.h>// day con chung dai nhat
using namespace std;
int f[105][105][105]={0};
int main()
{
	string s1, s2, s3;
	cin>>s1>>s2>>s3;
	int n=s1.length(), m=s2.length(), p=s3.length();
	s1='%'+s1; s2='$'+s2, s3='@'+s3;
	memset(f, 0, sizeof(f));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int k=1;k<=p;k++){
				if(s1[i]==s2[j]&&s2[j]==s3[k]) f[i][j][k]=max({f[i-1][j-1][k-1]+1, f[i-1][j][k], f[i][j-1][k], f[i][j][k-1]});
				else f[i][j][k]=max({f[i-1][j][k], f[i][j-1][k], f[i][j][k-1]});
			}
		}
	}
	cout<<f[n][m][p];
}
