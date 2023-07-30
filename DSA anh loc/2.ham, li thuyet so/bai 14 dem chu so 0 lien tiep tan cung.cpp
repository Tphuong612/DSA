#include <bits/stdc++.h>
using namespace std;
long long m=(long long) 1e9+7;
long long solve(long long n, long long p)
{
	long long dem=0;
	for(long long i=p;i<=n;i*=p)
		{
			dem+=(n/i)%m;
//			dem%=m;
		}
	return dem;
}
int main()
{
	long long n;
	cin>>n;
	cout<<min(solve(n,2),solve(n,5))%m;
}
