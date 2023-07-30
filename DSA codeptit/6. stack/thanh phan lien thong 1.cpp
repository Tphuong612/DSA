#include <bits/stdc++.h>
using namespace std;
int n, m, s;// n dinh, m canh
int used[20001];
vector <int> ke[20001];

void DFS(int u){
	used[u]=1;
	for(auto v: ke[u]){
		if(!used[v]) DFS(v);
	}
}

int main()
{
	cin>>n>>m>>s;
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	DFS(s);
	vector <int> v;
	for(int i=1;i<=n;i++){
		if(used[i]==0) v.push_back(i);
	}
	if(v.empty()) cout<<0<<endl;
	else{
		for(auto x: v) cout<<x<<endl;
	}
	
}
