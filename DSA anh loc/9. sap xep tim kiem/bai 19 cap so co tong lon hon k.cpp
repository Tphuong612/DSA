#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	long long dem=0;
	for(int i=0;i<n;i++){
		dem+=(a+n)-upper_bound(a+i+1, a+n, k-a[i]);
	}
	cout<<dem;	
}
