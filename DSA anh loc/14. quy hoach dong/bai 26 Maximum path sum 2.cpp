#include <bits/stdc++.h>// duyet ngang
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5][n+5], f[n+5][n+5];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}
	
	memset(f, 0, sizeof(f));
	for(int j=1;j<=n;j++) f[1][j]=a[1][j];// hang 1
	
	for(int i=2;i<=n;i++){
		for(int j=1;j<=n;j++){
			f[i][j]=a[i][j]+max({f[i-1][j-1], f[i-1][j], f[i-1][j+1]});
		}
	}
	int ans=-9999999;
	for(int j=1;j<=n;j++){
		ans=max(ans, f[n][j]);
	}
	cout<<ans;
}
