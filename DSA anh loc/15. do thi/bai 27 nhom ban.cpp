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

int dem=0;
int DFS(int u){
	dem++;
	visited[u]=true;
	for(int x: ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
	return dem;
}
vector <int> tplt;// luu cac dinh bat dau cua cac tplt;
void solve(){
	int res=0;
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			int x = DFS(i);
			res=max(res, x);
			dem=0;
		}
	}
	cout<<res<<endl;
	
}
int main()
{
	nhap();
	solve();
}
