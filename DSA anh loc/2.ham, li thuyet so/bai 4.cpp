#include <bits/stdc++.h>
using namespace std;
int prime[10000000];
void sang(int n)
{
	for(int i=0;i<=n;i++) prime[i]=1;
	prime[0]=prime[1]=0;
	for(int i=2;i<=sqrt(n);i++)
		{
			if(prime[i])
				{
					for(int j=i*i;j<=n;j+=i) prime[j]=0;
				}
		}
}
int check(int n)
{
	sang(10);
	while(n>0)
		{
			if(!prime[n%10]) return 0;
			n/=10;
		}
	return 1;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int dem=0;
	sang(b);
	for(int i=a;i<=b;i++)
		{
			if(prime[i]) 
				if(check(i)) dem++;
		}
	cout<<dem;
}
