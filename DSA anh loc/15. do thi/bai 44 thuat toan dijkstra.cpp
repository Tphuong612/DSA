#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<int, int> ii;
int n, m, s;// n dinh, m canh, bat dau tu dinh s

vector <ii> ke[1005];
int truoc[1005];

//void nhap(){
//	cin>>n>>m>>s;// n dinh, m canh
//	for(int i=1; i<=m; i++){
//		int x, y, z;
//		cin>>x>>y>>z;
//		ke[x].push_back({y, z});// danh sach cac dinh ke, trong so cua dinh x
//		//ke[y].push_back({x, z});// danh sach cac dinh ke, trong so cua dinh x
//	}
//}
int a[1005][1005];
void nhap(){
	cin>>n>>s;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
			if(a[i][j]<1000 && a[i][j]>=0){
				ke[i].push_back({j, a[i][j]}); // danh sach cac dinh ke: (dinh, trong so) 	q?
				//ke[j].push_back({i, a[i][j]});
			}
		}
	}
}

void path(int s, int t){
	vector <int> res;
	while(t!=s){
		res.push_back(t);
		t=truoc[t];
	}
	res.push_back(s);
	reverse(res.begin(), res.end());
	for(int i: res) cout<<i<<" ";
	cout<<endl;
}

void dijkstra(int s){// tim duong di ngan nhat tu dinh s den cac dinh con lai
	
	priority_queue <ii, vector<ii>, greater<ii>> q;//(do da, dinh) => de dang sap xep
	q.push({0, s});// (do dai, dinh)
	
	vector <ll> d(n+1, 1e9);
	d[s]=0;
	truoc[s]=s;
	
	while(!q.empty()){
		ii t=q.top(); 
		q.pop();
	
		int dis=t.first, u=t.second; // (do dai cu ban dau, dinh)
		if(dis > d[u]) continue;// trong queue ton tai nhieu duong di den 1 dinh, thi dis: chinh la do dai cua 1 trong "nhieu duong di do"
		// neu dis nay > d[u]: (cap nhap cu) thi bo luon (da loai ra lhoi queue);
		for(ii e: ke[u]){
			int v=e.first, w=e.second;// (dinh, trong so (u, v))
			if(d[v] > d[u] + w){
				d[v] = d[u] +w;
				q.push({d[v], v});
				truoc[v]=u;
			}
		}
	}
	int dem=0;
	for(int i=1; i<=n; i++){
		dem++;
		cout<<dem<<". "<<" duong di tu "<<s<<" den "<<i<<" co trong so la: ";
		cout<<d[i]<<" "<<endl;
		if(d[i]>10000) cout<<"khong co duong di"<<endl;
		else{
			cout<<"duong di la: ";
			path(s, i);
		}
	}
}
int main()
{
	nhap();
	dijkstra(s);
}
/*
7 1
0 20 5 17 100000000 100000000 100000000
20 0 100000000 1 100000000 100000000 1
5 100000000 0 25 3 10 100000000
17 1 25 0 15 100000000 100000000
100000000 100000000 3 15 0 1 100000000
100000000 100000000 10 100000000 1 0 1
100000000 1 100000000 100000000 100000000 1 0

7 28 1
1 1 0
1 2 10
1 3 15
1 4 20
1 6 1
2 2 0
2 3 3
2 7 30
3 3 0
3 4 25
3 5 3
3 7 45
4 2 10
4 3 25
4 4 0
4 5 35
5 2 2
5 3 3
5 5 0
5 7 3
6 3 1
6 4 1
6 6 0
6 7 25
7 2 1
7 4 30
7 6 1
7 7 0
*/
