#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;// n so not, m so con gian lien tiep ko dc vuot qua
vector <int> ke[1005];
bool visited[1005];
int deg[1005], sl[1005], gian[1005];// sl[i]: so con gian lien tiep cho den dinh i
void nhap(){
	cin>>n>>m;
	for(int i=1; i<=n; i++)
		 cin>>gian[i];// Sai cho nay nhe gai
	for(int i=1; i<=n-1; i++){
		int x, y;
		cin>>x>>y;
		ke[x].push_back(y);
		deg[x]++;
		ke[y].push_back(x);
		deg[y]++;
	}
	memset(visited, false, sizeof visited);
}

void BFS(int u){
	queue <int> q;
	q.push(u);
	sl[u] = gian[u];
	visited[u]=true;
	while(!q.empty()){
		int t=q.front();
		q.pop();
		for(int i: ke[t]){
			
			if(!visited[i]){// Xet cac dinh chua duoc tham
				// Neu dinh i co gian
				if(gian[i]==1 && sl[t]<=m) sl[i]=sl[t]+1;
				else if(gian[i]==0 && sl[t]<=m) sl[i]=0;
				else if (sl[t]>m) sl[i]=m+2;// gan tuong trung thoi
				
				visited[i]=true;
				q.push(i);
			}
		}
	}
	
}

int main()
{
	nhap();
	BFS(1);

	int cnt=0;
	// Vong for phai chay tu 2: vi trong truong hop cay khung co 2 dinh thi se bi sai
	for(int i=2; i<=n; i++){
		if(deg[i]==1 && sl[i]<=m){
			//cout<<i<<" "<<sl[i]<<endl;
			cnt++;
		}
	}
	cout<<cnt;
}