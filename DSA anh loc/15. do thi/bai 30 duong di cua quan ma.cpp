#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005][1005], visited[1005][1005], d[1005][1005];
/* 
mang a la ma tran ban dau, 
mang visited[i][j] dung de danh dau da tham o a[i][j], 
d[i][j] dung de danh dau so buoc it nhat de di den o o vi tri d[i][j];
*/
int n;
// ki thuat duyet cac o lien ke (giong kieu tao danh sach ke dung de duyet BFS)
int dx[8]={-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8]={-1, 1, 2, 2, 1, -1, -2, -2};
void BFS(int s, int t){

	queue <pair<int, int>> q;
	q.push({s, t});
	visited[s][t]=1;
	while(!q.empty()){
		auto top = q.front();
		q.pop();
		int b=top.first, c=top.second;
		for(int k=0; k<8; k++){ //duyet cac canh ke
			int i1=b+dx[k], j1=c+dy[k];
			if(i1>=1 && i1<=n && j1>=1 && j1<=n && visited[i1][j1]==0 && a[i1][j1]==1){
				visited[i1][j1]=1;
				q.push({i1, j1});
				d[i1][j1]=d[b][c] + 1;
			}
		}
	}
}

int main()
{

	cin>>n;
	int s, t, u, v;
	cin>>s>>t>>u>>v;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	memset(visited, 0, sizeof visited);
	BFS(s,t);
	
	if(d[u][v]) cout<<d[u][v];
	else cout<<-1;
	cout<<endl;
	
}
