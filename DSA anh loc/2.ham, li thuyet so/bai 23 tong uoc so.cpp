#include <bits/stdc++.h>
using namespace std;
int check(long long n)
{
	long long k=(long long) sqrt(n);
	if(k*k==n) return 1;
	else return 0;
}
int main()
{
	long long n;
	cin>>n;
	long long s=0;
	for(int i=1;i<=sqrt(n);i++)
		if(n%i==0) s+=i+n/i;
	if(check(n)==1) s=s-sqrt(n);
	cout<<s;
	
}
