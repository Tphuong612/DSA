#include <bits/stdc++.h>
using namespace std;
int prime[10000005];
void sang()
{
	for(int i=0;i<=10000000;i++) prime[i]=1;// coi tat ca cac so tu 0 den n deu la snt
	prime[0]=prime[1]=0;
	for(int i=2;i<=sqrt(10000000);i++)
		{
			if(prime[i])
				{
					for(int j=i*i;j<=10000000;j+=i) prime[j]=0;
					// j khong con la snt nua
				}
		}
}
int main()
{
	int n;
	cin>>n;
	sang();
	for(int i=0;i<=n;i++)
		if(prime[i]) cout<<i<<" ";
}
