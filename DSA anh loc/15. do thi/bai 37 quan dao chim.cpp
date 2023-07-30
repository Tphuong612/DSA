#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool visited[1005];
int n, m; // n dinh, m canh
vector <int> ke[1005];
void nhap(){
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
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

int tplt(int u){
	memset(visited, false, sizeof visited);
	int dem=0;
	visited[u]=true;
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			dem++;
			DFS(i);
		}
	}
	return dem;
}
int main()
{
	nhap();
	int bd = tplt(0);
	int cnt=0;
	for(int i=1; i<=n; i++){
	
		if(tplt(i) > bd) cnt++;
	}
	cout<<cnt;
}
