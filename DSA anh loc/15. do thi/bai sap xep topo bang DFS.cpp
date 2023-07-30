#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
vector <int> ke[1005];
bool used[1005];
stack <int> st;
void nhap(){
	cin>>n>>m;
	for(int i=0; i<m; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
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
	st.push(u);
 }
void topo(){
	for(int i=1; i<=n; i++){// dam bao duyet het ca do thi
		if(!used[i]){
			DFS(i);
		}
	}
	while(!st.empty()){// in ra 
		cout<<st.top()<<" ";
		st.pop();
	}
}
	
int main()
{
	nhap();
	topo();
}
