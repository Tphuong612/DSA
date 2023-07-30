#include <bits/stdc++.h>
#define ll long long
using namespace std;
int people[1005], visited[1005], tham[1005]={0};
int k, m, n; //k nguoi, n dia diem, m doan duong 1 chieu
vector <int> ke[1005];
void nhap(){
	cin>>k>>n>>m;
	for(int i=1; i<=k; i++) cin>>people[i];
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
	}
	memset(visited, 0, sizeof visited);
}

void DFS(int u){
	visited[u]=true;
	for(int x: ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}

void solve(){
	for(int i=1; i<=k; i++){
		DFS(people[i]);
		for(int j=1; j<=n; j++){
			if(visited[j]==1) tham[j]++;
		}
		memset(visited, 0, sizeof visited);
	}
	int dem=0;
	for(int i=1; i<=n; i++){
		if(tham[i]==k) dem++;
	}
	cout<<dem;
}
int main()
{
	nhap();
	solve();
}
