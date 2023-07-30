#include <bits/stdc++.h>
using namespace std;
int color[1005];
int parent[1005];
bool res=false;
vector <int> ke[1005];
int n, m;// n dinh, m canh
/*
trang: chua tham, chua vao ngan xep - so 0
xam: da tham nhung chua xong (tuc la van dang o trong ngan xep) - co duong di - so 1
den: da tham xong, day ra khoi ngan xep - so 2
*/
void nhap(){
	cin>>n>>m;
	memset(color, 0, sizeof(color));
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
	}
}
void DFS(int u){
	color[u]=1;
	parent[u]=0;
	for(int x: ke[u]){
		parent[x] = u;
		// neu dinh u da duyet va dinh u khong phai cha cua x thi u-x chinh la canh nguoc trong do thi vo huong;
		if(color[x]==1 && x != parent[u]) {
			res=true;
			return;
		}
		if(color[x] == 0){
			DFS(x);
		}
	}
	color[u] = 2;
	
}
int main()
{
	nhap();
	for(int i=1; i<=n; i++){
		if(!color[i]){
			DFS(i); 
		}
	}
	if(res) cout<<1<<endl;
	else cout<<0<<endl;
	for(int i=1; i<=n; i++) ke[i].clear();
	
}
