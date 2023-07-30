#include <bits/stdc++.h>
using namespace std;
int n, a[20][20];
string s="";
int check=0;
void Try(int i, int j)
{
	if(a[1][1]==0) return;
	if(i==n&&j==n){
		check=1;
		cout<<s<<endl;
	}
	if(i+1<=n&&a[i+1][j]==1){
		s+='D';
		Try(i+1, j);
		s.pop_back();
	}
	if(j+1<=n&&a[i][j+1]){
		s+='R';
		Try(i, j+1);
		s.pop_back();
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) cin>>a[i][j];
	Try(1,1);
	if(check==0) cout<<"-1";
	
}
