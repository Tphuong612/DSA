#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector <int> ke[1005];
int f[1005]={0};
bool visited[1005];
int n, m; // n dinh, m canh
void nhap(){
	cin>>n;
	for(int i=1; i<=n-1; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited, false, sizeof visited);
}

void BFS(int u){
	queue <int> q;
	q.push(u);
	f[u]=0;
	visited[u]=true;
	while(!q.empty()){
		int t=q.front();
		q.pop();
		for(int i: ke[t]){
			if(visited[i]==false){
				f[i] = f[t] + 1;
				visited[i]=true;
				q.push(i);
			}
		}
	}
	
}

int main()
{
	nhap();
	BFS(1);
	for(int i=1; i<=n; i++){
		cout<<f[i]<<" ";
	}
}
