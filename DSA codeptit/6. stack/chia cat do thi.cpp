#include <bits/stdc++.h>
using namespace std;
int used[20001];
vector <int> ke[20001];
int n, m;
void DFS(int u){
	used[u]=1;
	for(auto v: ke[u]){
		if(!used[v]) DFS(v);
	}
}
void tplt(){
	priority_queue <pair<int, int>> q;
	int tplt=0;
	
	for(int i=1;i<=n;i++){
		if(!used[i]){
			tplt++;
			DFS(i);
		}
	}
	
	for(int i=1; i<n; i++){
		int dem=0;
		memset(used, 0, sizeof(used));
		used[i]=1;
		for(int j=1;j<=n;j++){
			if(!used[j]){
				dem++;
				DFS(j);
			}
		}
		q.push({dem, i});
	}
	int top=q.top().first;
	if(top==tplt) cout<<0<<endl;
	else{
		int arr[100001], l=0;
		while(1){
			pair<int, int> p=q.top();
			if(p.first==top){
				arr[l++]=p.second;
				q.pop();
			}
			else break;
		}
		sort(arr, arr+l);
		for(int i=0;i<=l-1;i++) cout<<arr[i];
		cout<<endl;
	}
	
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		memset(used, 0, sizeof(used));
		memset(ke, 0, sizeof(ke));
		cin>>n>>m;
		for(int i=1; i<=m; i++){
			int x, y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		tplt();
	}
}
