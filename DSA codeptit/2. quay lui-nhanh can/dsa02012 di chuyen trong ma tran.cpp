#include <bits/stdc++.h>
using namespace std;
int dem;
int a[101][101];
int m,n;
void Try(int i, int j)
{
	if(i==m-1&&j==n-1) dem++;
	if(i<m-1) Try(i+1, j);
	if(j<n-1) Try(i, j+1);
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>m>>n;
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		dem=0;
		Try(0,0);
		cout<<dem<<endl;
		
	}
}
