#include <bits/stdc++.h>// kiem tra xem chung co cung thuoc 1 thanh phan lien thong hay khong
using namespace std;
int visited[1005];// luu cac dinh da tham
vector <int> ke[1005];// luu danh sach ke
int tplt[1005];
int cnt=0;
int n, m;// n dinh, m canh
void nhap(){
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
}
void DFS(int u){
	visited[u]=1;
	tplt[u]=cnt;
	for(int i: ke[u]){
		if(!visited[i]){
			DFS(i);
		}
	}
}
void tao_tplt(){
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			cnt++;
			DFS(i);// so thanh phan lien thong chinh la so lan goi thuan toan DFS/BFS
		}
	}
}
int main()
{
	nhap();
	tao_tplt();
	int q;
	cin>>q;
	while(q--){
		memset(visited, 0, sizeof(visited));
		int s, t;
		cin>>s>>t;
		if(tplt[s]==tplt[t]) cout<<1<<endl;
		else cout<<-1<<endl;
	}
}
