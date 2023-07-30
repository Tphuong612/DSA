#include <bits/stdc++.h>
using namespace std;
int b[1000005];
int main()
{
	int t=1;
//	cin>>t;
	while(t--)
		{
			int n;
			cin>>n;
			int a[n+5];
			for(int i=1;i<=n;i++)
				{
					cin>>a[i];
					b[a[i]]++;
				}
			for(int i=1;i<=n;i++)
				{
					if(b[a[i]]!=0){
						cout<<a[i]<<" ";
						b[a[i]]=0;
					}
					
				}
		}
}

