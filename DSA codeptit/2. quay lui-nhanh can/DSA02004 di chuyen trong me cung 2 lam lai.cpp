
#include <bits/stdc++.h>
using namespace std;
int n;
int a[30][30]; 
bool used[30][30];
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
	if(a[i+1][j] && !used[i+1][j] && i<=n)// o ben duoi
	{
		s+='D';
		used[i+1][j]=true;
		Try(i+1, j);
		s.pop_back();
		used[i+1][j]=false;
		//s.erase(s.length() - 1, 1);// buoc quay lui
	}
	if(a[i][j-1] && !used[i][j-1] && j>=1)// o ben duoi
	{
		s+='L';
		used[i][j-1]=true;
		Try(i, j-1);
		s.pop_back();
		used[i][j-1]=false;
		//s.erase(s.length() - 1, 1);// buoc quay lui
	}
	if(a[i][j+1]&& !used[i][j+1] && j<=n)//o ben trai
	{
		s+='R';
		used[i][j+1]=true;
		Try(i, j+1);
		s.pop_back();
		used[i][j+1]=false;
		//s.erase(s.length() - 1, 1);// buoc quay lui
	}
	if(a[i-1][j]&& i>=1&& used[i-1][j])// o ben duoi
	{
		s+='U';
		used[i-1][j]=true;
		Try(i-1, j);
		s.pop_back();
		used[i-1][j]=false;
		//s.erase(s.length() - 1, 1);// buoc quay lui
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
		memset(used, false, sizeof used);
		Try(0,0);
		if(check==0) cout<<"-1";
		cout<<endl;
	}
}
