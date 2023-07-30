#include <bits/stdc++.h>
using namespace std;
int dx[4]={-1, 0, 0, 1};
int dy[4]={0, -1, 1, 0};
int main()
{
	int a[3][3]={
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	};
	int i=1,j=1;
	for(int k=0;k<4;k++){
		int i1=i+dx[k], j1=j+dy[k];
		cout<<a[i1][j1]<<" ";
	}
}
