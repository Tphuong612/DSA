#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005][1005], d[1005][1005], visited[1005][1005];
int m, n;
int BFS(int i, int j){
	queue <pair<int, int>> q;
	memset (visited, 0, sizeof visited);
	memset (d, 0, sizeof visited);
	visited[i][j]=1;
	q.push({i, j});// chi so cua o
	while(!q.empty()){
		auto t=q.front(); q.pop();
		int u=t.first, v=t.second;
		if(u==m&&v==n) return d[m][n];
		if(u+a[u][v]<=m && !visited[u+a[u][v]][v]){
			q.push({u+a[u][v], v});
			visited[u+a[u][v]][v]=1;
			d[u+a[u][v]][v]=d[u][v]+1;
		}
		if(v+a[u][v]<=n && !visited[u][v+a[u][v]]){
			q.push({u, v+a[u][v]});
			visited[u][v+a[u][v]]=1;
			d[u][v+a[u][v]]=d[u][v]+1;
		}
	}
	return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		
		cin>>m>>n;// m hang n cot
		
		for(int i=1; i<=m; i++){
			for(int j=1; j<=n; j++){
				cin>>a[i][j];
			}
		}
		
		cout<<BFS(1, 1)<<endl;
	}
}
