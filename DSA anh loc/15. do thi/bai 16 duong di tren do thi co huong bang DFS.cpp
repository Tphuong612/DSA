#include <bits/stdc++.h>
using namespace std;
int visited[1005]={0};// luu cac dinh da tham
vector <int> ke[1005];// luu danh sach ke
int parent[1005];
int n, m, s, t;// n dinh, m canh
void DFS(int u){
	visited[u]=1;// danh dau da tham
	for(int i: ke[u]){// duyet cac canh ke voi dinh u
		if(!visited[i]){
			parent[i]=u;// tu u->i thi u la parent cua i
			DFS(i);
		}
	}
}

void nhap(){

	cin>>n>>m>>s>>t;
	for(int i=1;i<=m;i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
	}
	for(int i=1;i<=n;i++){
		sort(ke[i].begin(), ke[i].end());
	}
}
int main()
{
	nhap();
	DFS(s);
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
