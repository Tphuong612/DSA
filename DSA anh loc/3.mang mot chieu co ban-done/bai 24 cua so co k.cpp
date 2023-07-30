#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	long long a[n+5];
	
	for(int i=0;i<n;i++) cin>>a[i];

	for(int i=0;i<n;i++){
		long long s=0;
		for(int j=i;j<i+k;j++) s+=a[j];
		cout<<s<<" ";
		if(i+k==n) break;
	}
}
