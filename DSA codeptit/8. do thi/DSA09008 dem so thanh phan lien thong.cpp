#include <bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
bool visited[1005];

void DFS(int u){
	visited[u]=true;
	for(int v: ke[u]){
		if(visited[v]==false){
			DFS(v);
		}
	}	
}
int v, e;// v dinh, e canh, duong di tu s den t
void tplt(){
	int dem=0;
	for(int i=1;i<=v;i++){
		if(!visited[i]){
			++dem;
			DFS(i);
		}
	}
	cout<<dem<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>v>>e;
		for(int i=1;i<=e;i++){
			int x, y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		memset(visited, false, sizeof(visited));
		tplt();
		for(int i=1;i<=v;i++) ke[i].clear();
	}
}
