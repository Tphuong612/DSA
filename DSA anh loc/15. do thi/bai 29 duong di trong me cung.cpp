#include <bits/stdc++.h>
#define ll long long

using namespace std;
int a[1005][1005], visited[1005][1005], d[1005][1005];
int n;
/* 
mang a la ma tran ban dau, 
mang visited[i][j] dung de danh dau da tham o a[i][j], 
d[i][j] dung de danh dau so buoc it nhat de di den o o vi tri d[i][j];
*/
int dx[8]={-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8]={-1, 0, 1, -1, 1, -1, 0, 1};
void BFS(int i, int j){
	queue <pair<int, int>> q;
	q.push({i, j});
	visited[i][j]=true;
	while(!q.empty()){
		auto x=q.front();
		q.pop();
		for(int k=0; k<8; k++){
			int i1=x.first+dx[k], j1=x.second+dy[k];
			if(i1>=1 && i1<=n && j1>=1 && j1<=n && visited[i1][j1]==0 && a[i1][j1]==1){
				visited[i1][j1]=true;
				q.push({i1, j1});
				d[i1][j1]=d[x.first][x.second]+1;
			}
		}
	}
}
int main()
{
	int t=1;
//	cin>>t;
	while(t--){
		//int n;// n hang, n cot;
		cin>>n;
		int s,t, u, v;
		cin>>s>>t>>u>>v;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		memset(visited, 0, sizeof visited);
		
		BFS(s, t);
		if(d[u][v]) cout<<d[u][v];
		else cout<<-1;
//		if(a[u][v]==1){
//			cout<<d[u][v];
//		}
//		else cout<<-1;
		cout<<endl;
	}
	
}
