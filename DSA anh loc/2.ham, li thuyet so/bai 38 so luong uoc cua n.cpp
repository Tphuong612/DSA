#include <bits/stdc++.h>
using namespace std;
int a[100005];

void sang(int n)
{
	for(int i=0;i<=n;i++) a[i]=1;
	a[0]=a[1]=0;
	for(int i=2;i<=sqrt(n);i++)
		{
			if(a[i])
				{
					for(int j=i*i;j<=n;j+=i) a[j]=0;				}
		}
	for(int i=0;i<=n;i++)
		if(a[i]) cout<<i<<" ";
}
int main()
{
	int n;
	cin>>n;
	sang(n);
}
