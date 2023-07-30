#include <bits/stdc++.h>
using namespace std;
bool visited[1005];
bool res=false;
int parent[1005];
vector <int> ke[1005];
int n, m;// n dinh, m canh
void nhap(){
	cin>>n>>m;
	memset(visited, false, sizeof(visited));
//	parent[1]=0;
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	
}

void BFS(int u){
	queue <int> q;
	q.push(u);
	visited[u]=true;
	parent[u]=0;
	while(!q.empty()){
		int t=q.front(); 
		q.pop();
		for(int x: ke[t]){
			// neu dinh x da duyet va dinh x khong phai cha cua t thi canh x-t se la canh nguoc
			if(visited[x]==true && x != parent[t]){
				res=true;
				return;
			}
			if(!visited[x]){
				visited[x]=true;
				parent[x]=t;
				q.push(x);
			}	
		}
	}
}
int main()
{
	nhap();
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			BFS(i);
		}
	}
	if(res) cout<<1<<endl;
	else cout<<0<<endl;
	for(int i=1; i<=n; i++) ke[i].clear();
	
}
