/*
input:
So dinh: 13
Ma tran ke:
0 1 1 1 0 0 0 0 0 0 0 0 0
1 0 1 1 0 0 0 0 0 0 0 0 0
1 1 0 1 1 0 0 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0 0 0 0 0
0 0 1 0 0 1 1 1 1 0 0 0 0
0 0 0 0 1 0 1 0 1 0 0 0 0
0 0 0 0 1 1 0 1 0 0 0 0 0
0 0 0 0 1 0 1 0 1 0 0 0 0
0 0 0 0 1 1 0 1 0 1 0 0 0
0 0 0 0 0 0 0 0 1 0 1 1 1
0 0 0 0 0 0 0 0 0 1 0 1 1
0 0 0 0 0 0 0 0 0 1 1 0 1
0 0 0 0 0 0 0 0 0 1 1 1 0

output: 
Do thi vo huong co dinh huong duoc hay khong?
Tra loi: NO
*/
#include <bits/stdc++.h>
using namespace std;
int n;// n dinh
int a[1001][1001];
vector <int> adj[1001];//  mang cac vector, dung chua danh sach ke
bool visited[1001];
vector <pair<int, int>> dscanh;

void input()
{
	cout<<"nhap so dinh cau: ";
	cin>>n;
	cout<<"Nhap ma tran ke:\n";
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n; j++) 
			cin>>a[i][j];
}
void tao()//tao danh sach ke va danh sach canh
{
	for(int x=1;x<=n;x++)
		for(int y=x;y<=n;y++){
			if(a[x][y]==1){
				adj[x].push_back(y);
				adj[y].push_back(x);
				dscanh.push_back({x,y});
			}
		}
	memset(visited, false, sizeof(visited));
}
void dfs(int u)
{
	visited[u]=true;
	for(int v: adj[u]){
		if(!visited[v]) dfs(v);
	}
}
void dfs2(int u, int s, int t)
{
	visited[u]=true;
	for(int v: adj[u]){
		if((u==s&&v==t)||(u==t&&v==s)) continue;
		if(!visited[v]) dfs2(v, s, t);
	}
}
void canhcau()
{
	int tplt=0;//dung de dem thanh phan lien thong cua do thi ban dau
	memset(visited, false, sizeof(visited));
	for(int i=1;i<=n;i++){// duyet tat ca cac dinh tu 1 den n
		if(visited[i]==false){
			tplt++;
			dfs(i);// neu lien thong thi se co duong di
		}
	}
	int ccau=0;
	
	for(auto it: dscanh){
		int x=it.first, y=it.second;
		//loai bo canh x, y roi dem so luong tplt(bien dem)
		memset(visited, false, sizeof(visited));// dem so tplt sau khi loai bo dinh x,y;
		int dem=0;
		for(int j=1;j<=n;j++){
			if(!visited[j]){
				++dem;
				dfs2(j, x, y);
			}
		}
		
		if(dem>tplt){
			++ccau;
		}
	}
	cout<<"Tra loi: ";
	if(ccau==0) cout<<"YES\n";
	else cout<<"NO\n";
//	cout<<ccau;
}
int main()
{
	input();
	tao();
	cout<<"Do thi vo huong co dinh huong duoc hay khong?\n";
	canhcau();
}
