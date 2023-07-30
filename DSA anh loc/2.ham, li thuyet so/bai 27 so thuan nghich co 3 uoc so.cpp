#include <bits/stdc++.h>
using namespace std;
int tn(long long n)
{
	long long bd=n;
	long long ngc=0;
	while(n>0)
		{
			ngc=ngc*10+n%10;
			n/=10;
		}
	if(bd==ngc) return 1;
	else return 0;
}
int uoc(long long n)
{
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
				{
					cnt++;
					while(n%i==0)
						{
							n/=i;
						}
				}
		}
	if(n!=1) cnt++;
	if(cnt>=3) return 1;
	else return 0;
}
int main()
{
	long long a,b;
	cin>>a>>b;
	long long dem=0;
	for(long long i=a;i<=b;i++)
		{
			if(tn(i)&&uoc(i))
				{
					cout<<i<<" ";
					dem++;
				}
		}
	if(dem==0) cout<<"-1";
}
