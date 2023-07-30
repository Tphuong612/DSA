#include <bits/stdc++.h>
using namespace std;
long long binpow(long long a,long long b)
{
	long long m= (long long) 1e9+7;
	if(b==0) return 1;
	long long x=binpow(a%m,b/2);
	if(b%2==1) return ((x%m)*(x%m)%m*(a%m))%m;
	else return ((x%m)*(x%m)%m)%m;
	
}
int main()
{
	long long a,b;
	cin>>a>>b;
	cout<<binpow(a,b);
}
