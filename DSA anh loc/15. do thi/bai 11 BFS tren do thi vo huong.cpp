#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
int visited[1005]={0};
vector <int> vt;
void BFS(int u){
	queue <int> q;
	q.push(u);
	visited[u]=1;
	vt.push_back(u);
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int x: ke[v]){
			if(!visited[x]){
				visited[x]=1;
				vt.push_back(x);
				q.push(x);
			}
		}
	}
}
int main()
{
	int n, m, s;// n canh, m dinh
	cin>>n>>m>>s;
	
	for(int i=1;i<=m;i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	
	for(int i=1;i<=n;i++){
		sort(ke[i].begin(), ke[i].end());
	}
	BFS(s);
	for(int i: vt) cout<<i<<" ";
}
