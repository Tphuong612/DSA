#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;// n dinh, m canh
int deg[1005]={0};
int parent[1005];
vector <pair<int, int>> canh;
void nhap(){
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		deg[y]++;
		deg[x]++;
		canh.push_back({x, y});
	}
}

void init(){
	for(int i=1; i<=n; i++){
		parent[i]=i;
	}
}

int find(int u){
	if(u==parent[u]) return u;
	else return parent[u]=find(parent[u]);
}

void Union(int x, int y){
	x=find(x);
	y=find(y);
	if(x==y) return;
	else{
		if(deg[x] > deg[y] || deg[x]==deg[y] && x<y){
			parent[y]=x;
		}
		else parent[x]=y;
	}
}

void solve(){
	for(auto x: canh){
		Union(x.first, x.second);
	}
	for(int i=1; i<=n; i++){
		if(parent[i]==i){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
int main()
{
	nhap();
	init();
	solve();
}
