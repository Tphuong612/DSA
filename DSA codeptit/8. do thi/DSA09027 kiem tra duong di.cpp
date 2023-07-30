#include <bits/stdc++.h>
using namespace std;
bool visited[1005];
int v, e;// v dinh, e canh, dinh bat dau u
vector <int> ke[1005];// luu danh sach ke

int dem=0;
int solve[1005];// dung de luu xem dinh do thi thuoc thanh phan lien thong nao
void DFS(int u){
	visited[u]=true;
	solve[u]=dem;// kiem tra xem i thuoc tplt nao
	for(int i: ke[u]){// duyet cac dinh ke voi u
		if(!visited[i]){
			DFS(i);
		}
	}
}

void tplt(){
	for(int i=1;i<=v;i++){
		if(!visited[i]){
			dem++;
			DFS(i);
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>v>>e;
		for(int i=1;i<=e;i++){
			int x, y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		memset (visited, false, sizeof(visited));
		tplt();
		int k;
		cin>>k;
		while(k--){
			int m, n;
			cin>>m>>n;
			if(solve[m]==solve[n]) cout<<"YES";
			else cout<<"NO";
			cout<<endl;
		}
		for(int i=1;i<=v;i++) ke[i].clear();
	}
}
