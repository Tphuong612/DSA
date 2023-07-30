#include <bits/stdc++.h>
using namespace std;
int check(int n)
{
	int k;
	for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
				{
					int dem=0;
					while(n%i==0)// co tac dung tinh so mu
						{
							dem++;
							n/=i;
						}
					if(dem>=2) return 0;
				}
		}
	if(n!=1) return 0;
	return 1;
}
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++) 
		if(check(i)) cout<<i<<" ";
	
}
