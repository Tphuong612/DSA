#include <bits/stdc++.h>
using namespace std;

long long binpow(int a, int b, int k)//da chia du
{
	if(b==0) return 1;
	long long x=binpow(a,b/2,k);
	long long m=pow(10,k);
	if(b%2==1) return (((x%m)*(x%m))%m)*(a%m)%m;
	else return ((x%m)*(x%m) %m )%m;
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	cout<<binpow(n,m,k);
	
}
