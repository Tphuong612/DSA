#include <bits/stdc++.h>
using namespace std;
typedef pair <int, int> ii;
int n, m, s;
int mindis;
vector <ii> adj[1005];
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x, y, w;
		cin>>x>>y>>w;
		adj[x].push_back({y,w});
		adj[y].push_back({x, w});
	}
}
long long dijkstra(int s){
	priority_queue <ii, vector<ii>, greater <ii>> q;
	q.push({0, s});
	vector <int> d(n+1, 1e9);
	d[s]=0;
	while(!q.empty()){
		ii t=q.top();
		q.pop();
		long long dis=t.first, u=t.second;
		if(dis>d[u]) continue;
		for(ii e: adj[u]){
			int v=e.first, w=e.second;
			if(d[v]>d[u]+w){
				d[v]=d[u]+w;
				q.push({d[v], v});
			}
		}
	}
	mindis=d[n];
	return mindis;
}
int dem=1;
long long sl(){
	for(int i=2;i<=n;i++){
		if(dijkstra(i)==mindis) dem++;
	}
	return dem;
}
int main()
{
	nhap();
	cout<<dijkstra(1)<<" "<<sl();
}
