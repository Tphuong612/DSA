#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int k=upper_bound(a, a+n, 0)-a;
	if(k!=n) cout<<k;
	else cout<<0;
}
