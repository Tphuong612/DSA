#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;// n dinh, m canh
vector <int> ke[1005];
int deg[1005]={0};
bool visited[1005];
void nhap(){
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[y].push_back(x);
		deg[y]++;
		ke[x].push_back(y);
		deg[x]++;
	}
	memset(visited, false, sizeof visited);
}
int res=0, dinh;// dinh luu gia tri co bac cao nhat trong 1 tplt
int DFS(int u){
	visited[u]=true;
	res=deg[u];
	dinh=u;
	for(int x: ke[u]){
		if(!visited[x]){
			if(deg[x]>res){
				res = deg[x];
				dinh = x;
			}
			DFS(x);
		}
	}
	return dinh;
}
//vector <int> tplt;// luu cac dinh bat dau cua cac tplt;
void solve(){
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			cout<< DFS(i) <<" ";
			res=0;
			dinh=0;
		}
	}
}
int main()
{
	nhap();
	solve();
}
