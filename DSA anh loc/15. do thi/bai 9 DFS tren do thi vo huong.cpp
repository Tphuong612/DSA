#include <bits/stdc++.h>
using namespace std;
vector <int> adj[1005];
int visited[1005]={0};
vector <int> vt;
void DFS(int u){
	visited[u]=1;
	vt.push_back(u);
	for(int v: adj[u]){// duyet cac dinh ke voi u
		if(visited[v]==0) 
			DFS(v);
	}
}
int main()
{
	int n, m, s;// n dinh, m canh
	cin>>n>>m>>s;
	
	for(int i=0;i<m;i++){// chuyen danh sach canh danh sach ke
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		sort(adj[i].begin(), adj[i].end());
	}
	DFS(s);
	for(auto i: vt) cout<<i<<" ";
}
