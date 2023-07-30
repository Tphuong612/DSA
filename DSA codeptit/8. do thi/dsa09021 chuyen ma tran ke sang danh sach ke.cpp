#include <bits/stdc++.h>
using namespace std;
int a[1001][1001];
int main()
{
	int n;
	cin>>n;// n la so canh v
	vector <int> adj[1001];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]) adj[i].push_back(j);
		}

	for(int i=1;i<=n;i++){
//		cout<<i<<": ";
		for(auto x: adj[i])
			cout<<x<<" ";
		cout<<endl;
	}
}
