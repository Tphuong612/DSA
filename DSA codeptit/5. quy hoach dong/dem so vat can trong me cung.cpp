#include <bits/stdc++.h>
using namespace std;
const int x[4]={-1, 0, 1, 0};
const int y[4]={0, 1, 0, -1};
vector<string> v;
int n, m, kq=0;
void bfs(int i, int j){
	v[i][j]='.';
	for(int k=0; k<4;k++){
		int l=i+x[k];
		int r=j+y[k];
		if(l>=0&&l<n&&r>=0&&r<m&&v[l][r]=='#'){
			bfs(l,r);
		}
	}
}
int main()
{
	cin>>n>>m;
	v.resize(n);
	for(auto &x: v) cin>>x;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v[i][j]=='#'){
				kq++;
				bfs(i,j);
			}
		}
	}
	cout<<kq;
}
