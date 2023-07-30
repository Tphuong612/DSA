#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
vector <int> ke[1005];
bool used[1005];
stack <int> st;
vector <int> t_ke[1005];
void nhap(){
	cin>>n>>m;
	for(int i=0; i<m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		t_ke[y].push_back(x);// tao transpose graph
	}
	memset(used, false, sizeof used);
}
void DFS1(int u){ // vua duyet vua tao thu tu sap xeo topo
// sap xep topo de dam bao thu tu duong di
 	used[u]=true;
 	for(int x: ke[u]){
 		if(!used[x]){
 			DFS1(x);
		}
	}
	st.push(u);
}

void DFS2(int u){// duyet do thi transpose
	used[u]=true;
	cout<<u<<" ";
	for(int v: t_ke[u]){
		if(!used[v]) DFS2(v);
	}
}

void kosaraju(){
	for(int i=1; i<=n; i++){
		if(!used[i]) DFS1(i);// tao thu tu sap xep topo
	}
	memset(used, false, sizeof used);
	int scc=0;
	while(!st.empty()){
		int u=st.top();
		st.pop();
		if(!used[u]){
			++scc;// so thanh phan lien thong;
			cout<<"scc"<<" "<<scc<<": ";
			DFS2(u);
			cout<<endl;
		}
	}
	
}
int main()
{
	nhap();
	kosaraju();
}
