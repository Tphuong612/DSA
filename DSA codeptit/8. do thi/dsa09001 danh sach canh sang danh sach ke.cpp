#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int v, e;// v la dinh, e la canh
		cin>>v>>e;
		vector <int> adj[1001];// mang cac vector gom 1001 vector
		int x,y;// luu danh sach canh
		
		for(int i=0;i<e;i++){
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		
		for(int i=1;i<=v;i++){
			cout<<i<<": ";
			for(auto x: adj[i]) cout<<x<<" ";
			cout<<endl;
		}
	}
}
