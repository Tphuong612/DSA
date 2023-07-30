#include <bits/stdc++.h>
using namespace std;
bool visited[1005];
vector <int> ke[1005];// luu danh sach ke
void DFS(int u){
	visited[u]=true;
	cout<<u<<" ";
	for(int i: ke[u]){// duyet cac dinh ke voi u
		if(!visited[i]){
			DFS(i);
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
			ke[y].push_back(x);
		}
		memset (visited, false, sizeof(visited));
		DFS(u);
		cout<<endl;
		for(int i=1;i<=v;i++) ke[i].clear();
	}
}
