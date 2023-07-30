#include <bits/stdc++.h>
using namespace std;
void check(long long n)
{
	long long k=(long long) sqrt(n);
	if(k*k==n) cout<<"YES";
	else cout<<"NO";
}
int main()
{
	long long n;
	cin>>n;
	check(n);
}
