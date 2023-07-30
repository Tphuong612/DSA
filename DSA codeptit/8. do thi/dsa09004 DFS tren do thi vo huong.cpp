#include <bits/stdc++.h>// do thi vo huong
using namespace std;
int m, n, k;// m dinh, n canh, DFS tu k
vector <int> adj[1001];
bool visited[1001];
void input()
{
	cin>>m>>n>>k;
	for(int i=1;i<=n;i++){
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));	
//	for(int i=1;i<=m;i++) visited[i]=false;
}
void DFS(int u)// code bang de quy
{
	cout<<u<<" ";
	visited[u]=true;
	for(int v: adj[u]){// duyet cac dinh ke voi u
		if(visited[v]==false) DFS(v);
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		input();
		DFS(k);
		cout<<endl;
		for(int i=1;i<=m;i++) adj[i].clear();
	}
}
