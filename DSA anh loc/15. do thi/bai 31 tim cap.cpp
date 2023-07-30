#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;// n dinh, m canh
vector <int> ke[1005];
int f[1005];
bool visited[1005];
void nhap(){
	cin>>n;
	for(int i=1; i<=n-1; i++){
		int x, y;
		cin>>x>>y;
		ke[y].push_back(x);
		ke[x].push_back(y);
	}
	memset(visited, false, sizeof visited);
}

int DFS(int u){
	int res=1;
	visited[u]=true;
	for(int i: ke[u]){
		if(!visited[i]){
			res += DFS(i);
		}
	}
	f[u] = res;
	return res;
}

int main()
{
	nhap();
	DFS(1);
	int cnt=0;
	for(int i=1; i<=n; i++){
		cnt += f[i];
	}
	cout<<cnt<<endl;
}
