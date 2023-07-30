#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, q;
	cin>>n>>q;
	int a[n+1];
	memset(a, 0, sizeof(a));
	int x, y;
	while(q--){
		cin>>x>>y;
		for(int i=x;i<=y;i++){
			if(a[i]==1) a[i]=0;
			else a[i]=1;
		}
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
}
