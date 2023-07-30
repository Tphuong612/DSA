#include <bits/stdc++.h>// duyet trau
using namespace std;
int n, m;
vector <int> ke[1005];
bool used[1005];
void nhap(){
	cin>>n>>m;//n dinh, m canh
	for(int i=1;i<=m;i++){
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
}

bool lien_thong_manh(){
	for(int i=1; i<=n; i++){// duyet cac DFS tai dinh i
		memset(used, false, sizeof used);
		DFS(i);
		for(int j=1; j<=n; j++){
			if(!used[j]) return false;
		}
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		nhap();
		if(lien_thong_manh()) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
		for(int i=1;i<=n;i++) ke[i].clear();
	}
}
