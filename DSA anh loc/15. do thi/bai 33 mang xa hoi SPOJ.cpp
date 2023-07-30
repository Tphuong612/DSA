#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;// n dinh, m canh
vector <int> ke[1005];
vector <int> tplt;
bool visited[1005];
void nhap(){
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited, false, sizeof visited);
}

int dem=0;
int DFS(int u){
	visited[u] = true;
	dem++;
	for(int x: ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
	return dem;
}

void solve(){
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			int k = DFS(i);
			//cout<<k<<" ";
			tplt.push_back(k);
			dem=0;
		}
	}
	long long check=0;
	for(int i=0; i<tplt.size(); i++){
		cout<<tplt[i]<<endl;
		if(tplt[i]>=2){
			check += (long long) tplt[i]*(tplt[i]-1)/2;//nC2
		}
	}
	if(check == m) cout<<"YES";
	else cout<<"NO";
}
int main()
{
	nhap();
	solve();
}
