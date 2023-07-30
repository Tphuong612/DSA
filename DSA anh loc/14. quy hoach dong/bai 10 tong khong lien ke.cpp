#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1];
	long long f[n+1];// tong lon nhat cua i phan tu dau tien tmdb;
	for(int i=1;i<=n;i++) cin>>a[i];
	f[0]=0;
	f[1]=a[1];
	for(int i=2;i<=n;i++){
		f[i]=max(a[i]+f[i-2], 0+f[i-1]);
	}
	cout<<f[n];
}
