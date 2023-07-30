#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	cin>>n>>k;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	long long s=0;// ans luu ki luc
	for(int i=0;i<k;i++) s+=a[i];// khoi tao cua so truot
	long long ans=s, idex=0;
	
	for(int i=1;i<=n-k;i++){
		s=s-a[i-1]+a[i-1+k];
		if(s>ans){
			ans=s;
			idex=i;
		}
	}
	cout<<ans<<endl;
	for(int j=idex;j<idex+k;j++) cout<<a[j]<<" ";
	
}
