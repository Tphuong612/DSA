#include <bits/stdc++.h>// danh sach canh sang danh sach ke do thi co huong
using namespace std;
int main()
{
	int n, m;// n dinh, m canh
	cin>>n>>m;
	vector <int> adj[1005];
	for(int i=1;i<=m;i++){
		int x, y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	for(int i=1;i<=n;i++){
		cout<<i<<" : ";
		sort(adj[i].begin(), adj[i].end());
		for(auto x: adj[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
