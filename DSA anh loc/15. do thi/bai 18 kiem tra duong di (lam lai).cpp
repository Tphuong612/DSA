#include <bits/stdc++.h>
using namespace std;
int n, m;
vector <int> ke[1005];
bool used[1005];
int tplt[1005];
int dem=0;
void nhap(){
	cin>>n>>m;//n dinh, m canh
	for(int i=1;i<=m;i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(used, false, sizeof used);
}

void DFS(int u){
	used[u]=true;
	tplt[u]=dem;
	for(int x: ke[u]){
		if(!used[x]){
			tplt[x]=dem;
			DFS(x);
		}
	}
}

void solve(int s, int t){// ktra xem dinh do thuoc tplt so bao nhieu
	for(int i=1;i<=n;i++){
		if(!used[i]){
			dem++;
			DFS(i);
		}
	}
	if(tplt[s]==tplt[t]) cout<<1;
	else cout<<-1;
	cout<<endl;
}
int main()
{
	int t=1;
	while(t--){
		nhap();
		int q;
		cin>>q;
		while(q--){
			int s, t;
			cin>>s>>t;
			solve(s, t);
		}
		for(int i=1;i<=n;i++) ke[i].clear();
	}
}
