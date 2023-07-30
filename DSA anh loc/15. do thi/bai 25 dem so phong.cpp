#include <bits/stdc++.h>
#define ll long long
using namespace std;
char a[1005][1005];
int used[1005][1005];
int dem=0, n, m;
int dx[4]={-1, 0, 1, 0};
int dy[4]={0, 1, 0, -1};
void DFS(int i, int j){
	used[i][j]=1;
	for(int k=0; k<4; k++){
		int x=i+dx[k], y=j+dy[k];
		if(x>=1 && x<=n && y>=1 && y<=m && a[x][y]=='.' && used[x][y]==0){
			DFS(x, y);
		}
	}
}
int main()
{

	cin>>n>>m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin>>a[i][j];
		}
	}
	memset(used, 0, sizeof used);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(used[i][j]==0 && a[i][j]=='.'){
				dem++;
				DFS(i, j);
			}
		}
	}
	cout<<dem<<endl;
}
