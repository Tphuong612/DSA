#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
int parent[1005];
bool visited[1005];

void DFS(int u){// su dung DFS de tao mang parent
	visited[u]=true;
	for(int v: ke[u]){
		if(visited[v]==false){
			parent[v]=u;
			DFS(v);
		}
	}	
}

void path(int s, int t){
	DFS(s);
	if(visited[t]==false) cout<<-1;
	else{
		vector <int> res;// dung de luu duong di
		// duyet nguoc lai tu cuoi ve dau
		while(t!=s){
			res.push_back(t);
			t=parent[t];
		}
		res.push_back(s);
		reverse(res.begin(), res.end());
		for(int x: res) cout<<x<<" ";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int v, e, s, t;// v dinh, e canh, duong di tu s den t
		cin>>v>>e>>s>>t;
		for(int i=1;i<=e;i++){
			int x, y;
			cin>>x>>y;
			ke[x].push_back(y);
			
		}
		memset(visited, false, sizeof(visited));
		path(s, t);
		cout<<endl;
		for(int i=1;i<=v;i++) ke[i].clear();
	}
}
