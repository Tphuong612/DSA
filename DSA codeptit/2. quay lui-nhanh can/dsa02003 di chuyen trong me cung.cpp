#include <bits/stdc++.h>
using namespace std;
int n;
int a[30][30];
string s="";
int check;
void Try(int i, int j)// xau s thuc hien theo lenh if da dc sap xep
{
	if(a[0][0]==0) return;
	if(i==n-1&&j==n-1)
	{
		check=1;
		cout<<s<<" ";
	}
	if(a[i+1][j])// o ben duoi
	{
		s+='D';
		Try(i+1, j);
		s.erase(s.length() - 1, 1);// buoc quay lui
	}
	if(a[i][j+1])//o ben trai
	{
		s+='R';
		Try(i, j+1);
		s.erase(s.length() - 1, 1);// buoc quay lui
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		check=0;
		cin>>n;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		Try(0,0);
		if(check==0) cout<<"-1";
		cout<<endl;
	}
}
