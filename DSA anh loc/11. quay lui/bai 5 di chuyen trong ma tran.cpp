#include <bits/stdc++.h>
using namespace std;
int m, n, a[50][50];
int dem=0;
void Try(int i, int j)
{
	if(i==m-1&&j==n-1) dem++;
	if(i+1<=m-1) Try(i+1, j);
	if(j+1<=n) Try(i, j+1);
}
int main()
{
	cin>>m>>n;// m hang n cot
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	Try(0, 0);
	cout<<dem;
	
}
