#include <bits/stdc++.h>// duyet ngang
using namespace std;
using ll=long long;
int main()
{
	int n, m;
	cin>>n>>m;// n hang m cot
	ll a[n+5][m+5], f[n+5][m+5];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	}
	
	memset(f, 0, sizeof(f));
	for(int j=1;j<=m;j++) f[1][j]=a[1][j];// hang 1
	for(int i=1;i<=n;i++) f[i][1]=a[i][1];
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			f[i][j]=a[i][j]+max(f[i-1][j], f[i][j-1]);
		}
	}
//	ll ans=-9999999;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++)
//		ans=max({ans, f[n][j], f[i][n]});
//	}
	cout<<f[n][m];
}
