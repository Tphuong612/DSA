#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005][1005], used[1005]={0};
int n;
void nhap(){
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
}
vector <pair<int, int>> cay_khung;
void tree_DFS(int u){ 
	used[u]=1;
	for(int i=1; i<=n; i++){
		if(a[u][i]==1 && used[i]==0){
			cay_khung.push_back({u, i});
			tree_DFS(i);
		}
	}
} 

void Tree(){
	memset(used, 0, sizeof used);
	int goc=1;
	tree_DFS(goc);
	if(cay_khung.size()<n-1) cout<<"do thi khong lien thong, khong ton tai cay khung";
	else{
		for(auto x: cay_khung){
			cout<<x.first<<" "<<x.second<<endl;
		}
	}
}
int main()
{
	nhap();
	Tree();
}
/*
6
0 1 1 0 0 1
1 0 1 1 1 0
1 1 0 1 1 0
0 1 1 0 1 1
0 0 1 1 0 1
1 0 0 1 1 0

13
0    1    1    0    0    0    0    0    0    0    1    0    0
1    0    0    1    0    1    0    0    0    0    0    0    0
1    0    0    1    0    0    0    0    0    0    0    0    0
0    1    1    0    0    1    0    0    0    0    0    0    0
0    0    0    0    0    0    0    0    1    1    0    0    0
0    1    0    1    0    0    1    1    0    0    0    0    0
0    0    0    0    0    1    0    0    0    0    0    0    0
0    0    0    0    0    1    0    0    0    1    0    0    0
0    0    0    0    1    0    0    0    0    0    0    0    1
0    0    0    0    1    0    0    1    0    0    0    0    0
1    0    0    0    0    0    0    0    0    0    0    1    1
0    0    0    0    0    0    0    0    0    0    1    0    1
0    0    0    0    0    0    0    0    1    0    1    1    0
BFS: 1,2,3,11,4,6,12,13,7, 8, 9,10, 5.
*/