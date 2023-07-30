#include <bits/stdc++.h>
using namespace std;
int visited[1005]={0};// luu cac dinh da tham
vector <int> ke[1005];// luu danh sach ke
int n, m;// n dinh, m canh
void DFS(int u){
	visited[u]=1;
	for(int i: ke[u]){
		if(!visited[i]){
			DFS(i);
		}
	}
}
int tplt(){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			++dem;
			DFS(i);
		}
	}
	return dem;
}
int main()
{
	
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		sort(ke[i].begin(), ke[i].end());
	}
	
	int tplt_ban_dau = tplt();
	
	int res=0;
	for(int i=1;i<=n;i++){
		// loai bo i ra khoi do thi de dem lai tplt
		memset(visited, 0, sizeof(visited));
		visited[i]=1;// tam thoi loai bo
		if(tplt() > tplt_ban_dau) res++;
	}
	
	cout<<res;
}
