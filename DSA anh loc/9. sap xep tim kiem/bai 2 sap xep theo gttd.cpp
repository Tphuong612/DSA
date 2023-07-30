#include <bits/stdc++.h>
using namespace std;
bool cmp(long long a, long long b)
{
	return abs(a)<abs(b);
}
int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(long long &x: a) cin>>x;
	stable_sort(a, a+n, cmp);
	for(long long x: a) cout<<x<<" ";
}
