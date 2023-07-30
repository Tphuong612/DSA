#include <bits/stdc++.h>
using namespace std;
int n, m;
vector <int> ke[1005];
bool used[1005];
int tplt[1005];

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
	for(int x: ke[u]){
		if(!used[x]){
			DFS(x);
		}
	}
}

int dem_tplt(int u){// dem so tplt neu bo dinh u ra
	memset(used, false, sizeof used);
	int dem=0;
	used[u]=true;
	for(int i=1;i<=n;i++){
		if(!used[i]){
			dem++;
			DFS(i);
		}
	}
	return dem;
}


int main()
{
	int t=1;
	while(t--){
		nhap();
		int before=dem_tplt(0);
		int cnt=0;
		for(int i=1; i<=n; i++){
			if(dem_tplt(i)>before) cnt++;
		}
		cout<<cnt<<endl;
		for(int i=1;i<=n;i++) ke[i].clear();
	}
}
