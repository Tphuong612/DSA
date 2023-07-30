#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long f[n+5];
	f[1]=f[2]=1;
	long long m=1000000007;
	for(int i=3;i<=n;i++){
		f[i-1]=(f[i-1]%m)%m;
		f[i-2]=(f[i-2]%m)%m;
		f[i]=2*f[i-1]+3*f[i-2];
		f[i]=(f[i]%m)%m;
	}
	cout<<f[n];
}
