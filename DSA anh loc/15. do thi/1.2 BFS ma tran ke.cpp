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
} 
int main()
{
	nhap();
	BFS(1);
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
1,2,3,11,4,6,12,13,7, 8, 9,10, 5.
*/