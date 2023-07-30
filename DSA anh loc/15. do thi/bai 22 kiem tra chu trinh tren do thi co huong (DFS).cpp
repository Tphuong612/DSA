#include <bits/stdc++.h>
using namespace std;
int visited[1005];
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
	memset(visited, 0, sizeof(visited));
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
	}
}
void DFS(int u, int par){// cha cua u la par
	visited[u]=1;
	for(int x: ke[u]){
		// neu dinh u da duyet va dinh u khong phai cha cua x thi u-x chinh la canh nguoc trong do thi vo huong;
		if(visited[x]==1 && x!=par) {
			res=true;
			return;
		}
		if(visited[x] == 0){
			DFS(x, u);
		}
	}
	visited[u] = 2;
	
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
