#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x;
	cin>>n>>x>>k;
	long long a[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=k-2;i++) cout<<a[i]<<" ";
	cout<<x<<" ";
	for(int i=k-1;i<n;i++) cout<<a[i]<<" ";
}
