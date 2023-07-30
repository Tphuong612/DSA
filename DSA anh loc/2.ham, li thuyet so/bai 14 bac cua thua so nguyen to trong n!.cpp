#include <bits/stdc++.h>
using namespace std;
long long solve(long long n, long long p)
{
	long long dem=0;
	for(long long i=p;i<=n;i*=p)
		dem+=(n/i);
	return dem;
}
int main()
{
	long long n,p;
	cin>>n>>p;
	cout<<solve(n,p);
}
