#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+5][n+5];
	for(int i=1;i<=n;i++){// ma tran ke
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}
	
	// danh sach canh
	vector <pair<int, int>> edg;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1){
				edg.push_back({i, j});
			}
		}
	}
	for(auto x: edg){
		cout<<x.first<<" "<<x.second<<endl;
	}
	cout<<endl;
	
	//danh sach ke
	vector <int> adj[1005];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1){
				adj[i].push_back(j);
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<i<<" : ";
		for(auto x: adj[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
