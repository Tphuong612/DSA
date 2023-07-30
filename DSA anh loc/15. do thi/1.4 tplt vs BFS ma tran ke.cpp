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
void BFS(int u){ 
	queue <int> q;
	q.push(u);
	used[u]=1;
	while(!q.empty()){ 
		int s=q.front();
		q.pop();
		cout<<s<<" ";
	  	for(int i=1; i<=n; i++){ 
			if(a[s][i]==1 && used[i]==0){ 
				q.push(i);
				used[i]=1;
			}	 
		} 
	} 
	cout<<endl;
} 
void tplt(){
	int dem=0;
	for(int i=1; i<=n; i++){
		if(used[i]==0){
			dem++;
			BFS(i);
		}
	}
	cout<<dem<<" ";
}
int main()
{
	nhap();
	tplt();
}
/*
10
0 0 0 0 0 1 0 0 0 0
0 0 0 1 1 0 0 0 0 0
0 0 0 1 1 0 0 0 1 1
0 1 1 0 1 0 0 0 0 0
0 1 1 1 0 0 0 0 0 0
1 0 0 0 0 0 1 0 0 0
0 0 0 0 0 1 0 0 0 0
0 0 0 0 0 0 0 0 1 1
0 0 1 0 0 0 0 1 0 1
0 0 1 0 0 0 0 1 1 0

1 6 7
2 4 5 3 9 10 8
2
*/