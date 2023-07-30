#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;// n dinh, m canh
vector <int> ke[1005];
bool visited[1005];
void nhap(){
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[y].push_back(x);
		ke[x].push_back(y);
	}
	memset(visited, false, sizeof visited);
}

void DFS(int u){
	visited[u]=true;
	for(int x: ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}
vector <int> goc_tplt;// luu cac dinh bat dau cua cac tplt;
void solve(){
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			goc_tplt.push_back(i);
			DFS(i);
		}
	}
	cout<<goc_tplt.size()-1<<endl;
	for(int i=0; i<goc_tplt.size()-1; i++){
		cout<<goc_tplt[i]<<" "<<goc_tplt[i+1]<<endl;
	}
}
int main()
{
	nhap();
	solve();
}
