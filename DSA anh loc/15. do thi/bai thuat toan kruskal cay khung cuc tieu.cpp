#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct edge{
	int x, y;// bat dau o dinh x, ket thuc o dinh y
	int w;// co trong so w
};

vector <edge> e;// tap canh
int parent[1005], size[1005];
int n, m;// n dinh, m canh

void nhap(){
	cin>>n>>m;
	for(int i=0; i<m; i++){
		int x, y, w;
		cin>>x>>y>>w;
		e.push_back({x, y, w});// tao tap canh
	}
}

void init(){
	for(int i=1; i<=n; i++){
		parent[i]=i;
		size[i]=1;
	}
}

int find(int u){
	if(u == parent[u]) return u;
	else return parent[u] = find(parent[u]);
}

bool Union(int u, int v){
	u = find(u);
	v = find(v);
	if(u==v) return false;
	if(size[u] < size[v]) swap(u, v);// dat u luon la dinh co kich thuoc lon hon
	parent[v] = u;// da gop
	size[u] += size[v];
	return true;
}
bool cmp(edge a, edge b){
	return a.w < b.w;
}
void kruskal(){
	vector <edge> mst;// tap dinh cua cay khung
	int d=0;// trong so cay khung
	
	sort(e.begin(), e.end(), cmp);
	
	for(int i=0; i<m; i++){
		if(mst.size() == n-1) break;
		edge a = e[i];
		if(Union(a.x, a.y)){
			mst.push_back(a);
			d+=a.w;
		}
	}
	if(mst.size()<n-1) cout<<"do thi khong lien thong";
	else{
		cout<<"trong so nho nhat "<<d<<endl;
		for(auto i: mst){
			cout <<i.x<<" "<<i.y<<" "<<i.w<<endl;
		}
	}
}
int main()
{
	nhap();
	init();
	kruskal();
}
/*
6 9
1 2 12
1 3 4
2 3 1
2 4 5
2 5 3
3 5 2
4 5 3
4 6 10
5 6 8
*/
