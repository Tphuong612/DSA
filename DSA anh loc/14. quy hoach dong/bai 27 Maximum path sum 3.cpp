#include <bits/stdc++.h>// duyet doc
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
	
	for(int i=1;i<=n;i++) f[i][1]=a[i][1];
	
	for(int j=2;j<=n;j++){
		for(int i=1;i<=n;i++){
			if(i==1) f[i][j]=a[i][j]+max(f[i][j-1], f[i+1][j-1]);
			else if(i==n) f[i][j]=a[i][j]+max(f[i-1][j-1], f[i][j-1]);
			else f[i][j]=a[i][j]+max({f[i][j-1], f[i+1][j-1], f[i-1][j-1]});
		}
	}
	int ans=-9999999;
	for(int i=1;i<=n;i++){
		ans=max(ans, f[i][n]);
	}
	cout<<ans;
}
