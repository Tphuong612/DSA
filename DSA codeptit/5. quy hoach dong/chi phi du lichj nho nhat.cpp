#include <bits/stdc++.h>
using namespace std;
int min(int x, int y, int z){
	return min({x, y, z});
}

int minCost(int cos[100][], int m, int n){
	if(n<0||m<0) return min_max;
	else if(m==0&&n==0) return cost[m][n];
	else return cost[m][n] + min(minCost(cost, m-1, n-1), minCost(cost, m-1, n), minCost(cost, m, n-1));
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) 
				cin>>
		}
	}
}
