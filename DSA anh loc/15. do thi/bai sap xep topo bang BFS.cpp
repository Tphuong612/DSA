#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
vector <int> ke[1005];
int degree[1005]={0};// su dung de tinh ban bac vao
bool used[1005];
stack <int> st;
void nhap(){
	cin>>n>>m;
	for(int i=0; i<m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		degree[y]++;
	}
	memset(used, false, sizeof used);
}

void Kahn(){
	queue <int> q;
	for(int i=1; i<=n; i++){
		if(degree[i]==0){
			q.push(i);
		}
	}
	vector <int> topo;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		topo.push_back(u);// dua dinh nay vao vector
		for(int x: ke[u]){
			degree[x]--;// giam ban bac vao cua dinh ke vs dinh dang xet
			if(degree[x]==0) q.push(x);
		}
	}
	if(topo.size()<n) cout<<"do thi co chu trinh";
	else{
		for(int x: topo){
			cout<<x<<" ";
		}
	}
}
	
int main()
{
	nhap();
	Kahn();
}
