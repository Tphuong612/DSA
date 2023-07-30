#include <bits/stdc++.h>
using namespace std;
long long check(long long n)
{
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
				{
					cnt++;
					int dem=0;
					while(n%i==0)// co tac dung tinh so mu
						{
							dem++;
							n/=i;
						}
					if(dem>=2) return 0;
				}
		}
	if(n!=1) cnt++;
	if(cnt!=3) return 0;
	return 1;
}
int main()
{
	long long n;
	cin>>n;
	if(check(n)) cout<<"1";
	else cout<<"0";
	
}
