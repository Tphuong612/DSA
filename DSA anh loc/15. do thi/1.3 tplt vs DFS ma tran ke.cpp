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
void DFS(int u){ 
	stack <int> st;
	st.push(u);
	used[u]=1;
	cout<<u<<" ";
	while(!st.empty()){ 
		int s=st.top();
		st.pop();
	  	for(int i=1; i<=n; i++){ 
			if(a[s][i]==1 && used[i]==0){ 
				cout<<i<<" ";
				used[i]=1;
				st.push(s);
				st.push(i);
				break;
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
			DFS(i);
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
2 4 3 5 9 8 10
2
*/