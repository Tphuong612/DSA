#include <bits/stdc++.h>
using namespace std;
bool visited[1005];
vector <int> ke[1005];
int v, e;// v dinh, e canh
void DFS(int u){
	visited[u]=true;
	for(int i: ke[u]){
		if(!visited[i]){
			DFS(i);
		}
	}
}

int tplt(){
	int dem=0;
	for(int i=1;i<=v;i++){
		if(!visited[i]){
			++dem;
			DFS(i);
		}
	}
	return dem;
}

void dinh_tru(){
	for(int i=1;i<=v;i++){
		memset (visited, false, sizeof(visited));
		visited[i]=true;// loai khoi do thi dang xet
		if(tplt()>1){
			cout<<i<<" ";
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
		dinh_tru();
		cout<<endl;
		for(int i=1;i<=v;i++) ke[i].clear();
	}
}
