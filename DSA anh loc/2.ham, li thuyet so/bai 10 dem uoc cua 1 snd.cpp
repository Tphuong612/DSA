#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long sum=1;
	while(t--)
		{
			int p,e;
			cin>>p>>e;
			
			sum*=(e+1);
			sum%=1000000007;
		}

	cout<<sum;
}
