#include <bits/stdc++.h>
using namespace std;
bool visited[1005];
vector <int> ke[1005];// luu danh sach ke
void BFS(int u){
	queue <int> q;
	q.push(u);
	visited[u]=true;
	cout<<u<<" ";
	while(!q.empty()){
		int t=q.front(); q.pop();
		for(int i: ke[t]){
			if(visited[i]==false){
				visited[i]=true;
				cout<<i<<" ";
				q.push(i);
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int v, e, u;// v dinh, e canh, dinh bat dau u
		cin>>v>>e>>u;
		for(int i=1;i<=e;i++){
			int x, y;
			cin>>x>>y;
			ke[x].push_back(y);
		}
		memset (visited, false, sizeof(visited));
		BFS(u);
		cout<<endl;
		for(int i=1;i<=v;i++) ke[i].clear();
	}
}

