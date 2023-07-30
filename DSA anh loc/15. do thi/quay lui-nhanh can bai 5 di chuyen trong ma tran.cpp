#include <bits/stdc++.h>
#define ll long long

using namespace std;
int a[1005][1005], visited[1005][1005], d[1005][1005];
/* 
mang a la ma tran ban dau, 
mang visited[i][j] dung de danh dau da tham o a[i][j], 
d[i][j] dung de danh dau so buoc it nhat de di den o o vi tri d[i][j];
*/
int dx[2]={0, 1};
int dy[2]={1, 0};
int main()
{
	int t=1;
//	cin>>t;
	while(t--){
		int m, n;
		cin>>m>>n;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
	//	memset(visited, 0, sizeof visited);
		for(int i=1; i<=m; i++){
			for(int j=1; j<=n; j++){
				//visited[i][j]=true;
				for(int k=0; k<=1; k++){
					int i1=i+dx[k], j1=j+dy[k];
					if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]){
						visited[i1][j1]=true;
						d[i1][j1]=d[i][j]+1;
					}
				}
			}
		}
		cout<<d[m][n]<<endl;
	}
}
