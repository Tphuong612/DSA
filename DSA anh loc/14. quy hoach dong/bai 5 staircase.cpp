#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin>>n>>k;
	int f[n+1]={0};
	f[0]=1;// dk co so
	int m=1e9+7;
	for(int i=1; i<=n; i++){
		for(int j=1;j<=k;j++){
			if(i>=j) f[i]+=f[i-j];
			f[i]%=m;
		}
	}
	cout<<f[n];
}
