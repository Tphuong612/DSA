#include <bits/stdc++.h>
#define ll long long
using namespace std;
//string s="$abcdefgh";
// ki thuat duyet cac o lien ke (giong kieu tao danh sach ke dung de duyet BFS)
int dx[8]={-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8]={-1, 1, 2, 2, 1, -1, -2, -2};
int visited[20][20], d[20][20];
int BFS(int i, int j, int a, int b){
	queue <pair<int, int>> q;
	q.push({i, j});
	visited[i][j]=1;
	memset(d, 0, sizeof d);
	memset(visited, 0, sizeof visited);
	while(!q.empty()){
		auto t=q.front();
		q.pop();
		int i=t.first, j=t.second;
		if(i==a && j==b) return d[a][b];
		for(int k=0; k<8; k++){
			int a=i+dx[k], b=j+dy[k];
			if(a>=1 && a<=8 && b>=1 && b<=8 && !visited[a][b]){
				visited[a][b]=1;
				d[a][b]=d[i][j]+1;
				q.push({a,b});
			}
		}
	}
	return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		char x,u;
		int y,v;
		cin>>x>>y>>u>>v;
		cout<<BFS(x-'a'+1, y, u-'a'+1, v)<<endl;
	}
}
