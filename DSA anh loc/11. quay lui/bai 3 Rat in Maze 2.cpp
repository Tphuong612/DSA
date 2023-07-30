#include <bits/stdc++.h>
using namespace std;
int n, a[20][20];
string s="";
int check=0;
int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};
string m="URDL";
vector<string> v;
void Try(int i, int j)
{
	if(i==n&&j==n){
		check=1;
		v.push_back(s);
	}
	for(int k=0;k<4;k++){
		int r=i+dx[k];//row, r co the la tren, duoi nen ko cong truc tiep 1 hay -1, ma giu nguyen gia tri
		int c=j+dy[k];//column, tuong tu r
		if(r>=1&&r<=n&&c>=1&&c<=n&&a[r][c]==1){
			a[r][c]=0;
			s+=m[k];
			Try(r,c);
			s.pop_back();// buoc backtrack
			a[r][c]=1;//dam bao ko di lai, danh dau giong sinh hoan vi
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) cin>>a[i][j];
	a[1][1]=0;
	Try(1,1);
	sort(v.begin(), v.end());
	for(auto x: v){
		cout<<x<<endl;
	}
	if(check==0) cout<<"-1";	
}
