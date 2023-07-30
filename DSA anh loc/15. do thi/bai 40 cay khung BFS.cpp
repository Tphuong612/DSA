#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m, s;// n dinh, m canh, bat dau tu dinh s
vector <int> ke[1005];
bool visited[1005];
vector <pair<int, int>> tree;
void nhap(){
	cin>>n>>m>>s;
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited, false, sizeof visited);	
	for(int i=1; i<=n; i++){
		sort(ke[i].begin(), ke[i].end());
	}
}

void BFS(int u){
	queue <int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int t=q.front();
		q.pop();
		for(int i: ke[t]){
			if(!visited[i]){
				tree.push_back({t, i});
				visited[i] = true;
				q.push(i);
			}
		}
	}
}
int main()
{
	nhap();
	BFS(s);
	for(auto x: tree){
		cout<<x.first<<"->"<<x.second<<endl;
	}
}
