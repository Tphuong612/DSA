#include <bits/stdc++.h>
using namespace std;
int visited[1005]={0};// luu cac dinh da tham
vector <int> ke[1005];// luu danh sach ke
int parent[1005];
int n, m, s, t;// n dinh, m canh
void BFS(int u){
	queue <int> q;
	q.push(u);
	visited[u]=1;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(int x: ke[v]){
			if(visited[x]==0){
				parent[x]=v;
				visited[x]=1;
				q.push(x);
			}
		}
	}
}

void nhap(){

	cin>>n>>m>>s>>t;
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
int main()
{
	nhap();
	BFS(s);
	if(visited[t]==0) cout<<-1;// neu t chua dc tham hay la khong ton tai duong di giua s vs t
	else{
		vector <int> kq;
		while(t!=s){// truy vet
			kq.push_back(t);
			t=parent[t];
		}
		kq.push_back(s);
		
		reverse(kq.begin(), kq.end());// in ra 
		for(int x: kq) cout<<x<<" ";
	}
}
