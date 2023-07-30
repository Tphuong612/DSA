#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
int n, m;// n dinh, m canh
vector <ii> ke[1005];
bool taken[1005];
int parent[1005], d[1005];
// mang parent[]: luu cha, co tac dung luu canh cua cay khung
/*
mang taken[] kiem tra dinh thuoc tap V hay tap MST
taken[]=true;// mang thuoc MST;
taken[]=false;// mang thuoc tap V
*/
struct canh{
	int x, y, w;
	// x dinh dau, y dinh cuoi, w trong so
};
void nhap(){
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		int x, y, w;
		cin>>x>>y>>w;
		ke[x].push_back({y, w});
		ke[y].push_back({x, w});
	}
	memset(taken, false, sizeof(taken));
	for(int i=1; i<=n; i++){
		d[i]=INT_MAX;
	}
}

void prim(int s){
	priority_queue < ii, vector<ii>, greater<ii> > q;
	int res=0;// tinh trong so cua cay khung
	vector <canh> mst;
	q.push({0, s});
	
	while(!q.empty()){
		ii top = q.top();// canh co trong so nho nhat
		q.pop();
		int dinh = top.second, trongso = top.first;
		
		if(!taken[dinh]){
			res += trongso;
			taken[dinh] = true;// tuc la thuoc mang MST(cay khung)
			if(s != dinh){
				mst.push_back({dinh, parent[dinh], trongso});
			}
			// duyet tat ca cac dinh ke, cho no vao priority_queue
			for(ii x: ke[dinh]){
				int y=x.first, w=x.second;
				if(!taken[y] && w<d[y]){
					q.push({w, y});
					d[y]=w;
					parent[y]=dinh;
				}
			}
		}
	}
	cout<<"trong so cua cay khung: "<<res<<endl;
	for(auto i: mst){
		cout<<i.x<<" "<<i.y<<" "<<i.w<<endl;
	}
}
int main()
{
	nhap();
	prim(1);
}
