#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n; 
int parent[1005];
void init(){
	cin>>n;
	for(int i=1; i<=n; i++){
		parent[i] = i;
	}
}

int find(int u)// thao tuc tim dai dien
{
	// tim ve dinh co dai dien la chinh no de gan cho mang parent
	if(u==parent[u]) return u;
	else{
		parent[u]=find(parent[u]);
	}
}
bool Union(int u, int v){
	u = find(u);
	v = find(v);
	if(u==v) return false;
	else{
		parent[u] = parent[v] = min(u, v);
	}
	return true;
}
int main()
{
	init();
	
}
