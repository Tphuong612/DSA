#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;// n la so phan tu, k la so dau tru
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a+1, a+n);
	long long s=0;
	for(int i=1;i<=n-1-k;i++) s-=a[i];
	for(int i=n-k;i<n;i++) s+=a[i];
	cout<<s+a[0];
}
