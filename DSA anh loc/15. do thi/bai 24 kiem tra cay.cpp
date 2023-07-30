#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;// n dinh, m canh
vector <int> ke[1005];
vector <pair<int, int>> canh;
void nhap(){
	cin>>n>>m;
	
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
		canh.push_back({x, y});
	}
}

int parent[1005], sz[1005];
void init(){
	for(int i=1; i<=n; i++){
		parent[i]=i;
		sz[i]=1;
	}
}

int find(int u){
	if(u == parent[u]) return u;
	else return parent[u] = find(parent[u]);
	
}

bool Union(int u, int v){
	u = find(u);
	v = find(v);
	if(u == v) return false;
	if(sz[u] > sz[v]) swap(u, v);// coi u co kich thuoc nho hon
	parent[u] = v;
	sz[u] += sz[v];
	return true;
}

bool solve(){
	if(m != n-1) return false;
	for(auto x: canh){
		if(!Union(x.first, x.second)){
			return false;
		}
	}
	return true;
	
}
int main()
{
	nhap();
	init();
	if(solve()) cout<<1;
	else cout<<0;
	cout<<endl;
	
	
}
