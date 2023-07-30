#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		long long sum[n+5];// mang cong don
		
		for(int i=1;i<=n;i++) cin>>a[i];
		sum[1]=a[1];
		for(int i=2;i<=n;i++) sum[i]=sum[i-1]+a[i];
		int check=0;
		for(int i=2;i<=n;i++)
			{
//				cout<<sum[i-1]<<" "<<sum[n]-sum[i-1]
				if(sum[i-1]==sum[n]-sum[i-1]-a[i]){
					check=1;
					cout<<i<<endl;
					break;
				}
			}
		if(check==0) cout<<"-1\n";
	}
}
