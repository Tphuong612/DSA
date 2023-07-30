#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++)
		{
			int dem=0;
			while(n%i==0)// co tac dung tinh so mu
				{
					dem++;
					n/=i;
				}
			if(dem>0)
				{
					cout<<i<<"^"<<dem;
					if(n!=1) cout<<" * ";
				}
			
		}
	if(n!=1) cout<<n<<"^1";
}
