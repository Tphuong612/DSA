#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<int, int> ii;
int n, s;// n dinh, bat dau tu dinh s
int a[1005][1005];// ma tran trong so
vector <ii> ke[1005];
int truoc[1005];
vector <int> d(n+1, 1e5);
void nhap(){
	cin>>n>>s;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
			ke[i].push_back({j, a[i][j]});
			ke[j].push_back({i, a[i][j]});
		}
	}
}

void dijkstra(int s){// tim duong di ngan nhat tu dinh s den cac dinh con lai

	priority_queue <ii, vector<ii>, greater<ii>> q;
	q.push({0, s});// first: khoang cach ngan nhat den dinh nao do, s: luu ten dinh do; 
	d[s]=0;
	truoc[s]=0;
	for(int i=1; i<=n; i++){
		if(i==s) continue;
		d[i]=a[s][i];
	}
	while(!q.empty()){
		ii t=q.top();
		q.pop();
	
		int dis=t.first, u=t.second;
		if(dis > d[u]) continue;// neu khoang cach hien tai lon hon khoang cach di truc tiep tu nguon den dinh do thi ta giu nguyen d[u]
		for(ii e: ke[u]){
			int v=e.first, w=e.second;// v luu dinh hien tai dang xet, w: luu khoang cach giua (u,v);
			if(d[v] > d[u] + w){// thay doi cac gia tri d[v];
				d[v] = d[u] +w;
				q.push({d[v], v});
				truoc[v]=u;
			}
		}
	}
	for(int i=1; i<=n; i++){
		cout<<d[i]<<" ";
	}
}
void path(int s, int t){
	vector <int> res;
	while(t != s){
		res.push_back(t);
		t = truoc[t];
	}
	res.push_back(s);
	reverse(res.begin(), res.end());
	for(int x: res) cout<<x<<" ";
}
//void kq(int s){
//	for(int i=1; i<=n; i++){
//		cout<<d[i]<<" ";
//		//path(s, i);
//		cout<<endl;
//	}
//}
int main()
{
	nhap();
	dijkstra(s);
//	kq(s);
	
}
/*
7 1
0 10 15 20 100000000 1 100000000
100000000 0 3 100000000 100000000 100000000 30
100000000 100000000 0 25 3 100000000 45
100000000 10 25 0 35 100000000 100000000
100000000 2 3 100000000 0 100000000 3
100000000 100000000 1 1 100000000 0 25
100000000 1 100000000 30 100000000 1 0
*/
