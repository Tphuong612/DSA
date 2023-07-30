#include <bits/stdc++.h>
using namespace std;
int visited[1005]={0};// luu cac dinh da tham
vector <int> ke[1005];// luu danh sach ke
void DFS(int u){
	visited[u]=1;
	for(int i: ke[u]){
		if(!visited[i]){
			DFS(i);
		}
	}
}
int tplt(int n){
	int count=0;
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			++count;
			DFS(i);// so thanh phan lien thong chinh la so lan goi thuan toan DFS/BFS
		}
	}
	return count;
}
int main()
{
	int n, m;// n dinh, m canh
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
	cout<<tplt(n);
}
