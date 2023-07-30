#include <bits/stdc++.h>
using namespace std;
int n, m;
vector <int> ke[1005];
bool used[1005];
int tplt[1005];
vector <pair<int, int>> canh;
void nhap(){
	cin>>n>>m;//n dinh, m canh
	for(int i=1;i<=m;i++){
		int x, y;
		cin>>x>>y;
		canh.push_back({x,y});
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(used, false, sizeof used);
}

void DFS(int u, int s, int t){// duyet DFS neu khong co canh s-t
	used[u]=true;
	for(int x: ke[u]){
		if(x==s&&u==t || x==t&&u==s) continue;
		if(!used[x]){
			DFS(x, s, t);
		}
	}
}
int dem_tplt(int s, int t){// dem so tplt neu bo canh s-t ra ngoai
	memset(used, false, sizeof used);
	int dem=0;
	for(int i=1;i<=n;i++){
		if(!used[i]){
			dem++;
			DFS(i, s, t);
		}
	}
	return dem;
}

int main()
{
	int t=1;
	while(t--){
		nhap();
		int before=dem_tplt(0, 0);// so luong thanh phan lien thong ban dau
		int cnt=0;
		for(auto x: canh){ // lan luot loai bo tung canh ra khoi do thi
			int a=x.first, b=x.second;
			if(dem_tplt(a, b)>before) cnt++;
		}
		cout<<cnt<<endl;
		for(int i=1;i<=n;i++) ke[i].clear();
	}
}
