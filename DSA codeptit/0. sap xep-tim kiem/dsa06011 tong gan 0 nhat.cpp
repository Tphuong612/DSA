#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		long long min=10000000009;
		long long ans;
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if(abs(a[i]+a[j])<min)
					{
						min=abs(a[i]+a[j]); 
						ans=a[i]+a[j];
					}
		cout<<ans<<endl;
	}
	
}
