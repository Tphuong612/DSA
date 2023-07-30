#include <bits/stdc++.h>
using namespace std;
bool visited[1005];
bool res=false;
vector <int> ke[1005];
int n, m;// n dinh, m canh
void nhap(){
	cin>>n>>m;
	memset(visited, false, sizeof(visited));
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
void DFS(int u, int par){// cha cua u la par
	visited[u]=true;
	for(int x: ke[u]){
		// neu dinh u da duyet va dinh u khong phai cha cua x thi u-x chinh la canh nguoc trong do thi vo huong;
		if(visited[x]==true && x != par){
			res=true;
			return;
		}
		if(visited[x]==false){
			DFS(x, u);
		}
	}
	
}
int main()
{
	nhap();
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			DFS(i, -1);
		}
	}
	if(res) cout<<1<<endl;
	else cout<<0<<endl;
	for(int i=1; i<=n; i++) ke[i].clear();
	
}
