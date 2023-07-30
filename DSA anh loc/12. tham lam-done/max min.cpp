#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin>>n>>k;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	long long min=99999999999;
	for(int i=0;i<=n-k;i++){
		if(a[i+k-1]-a[i]<min) min=a[i+k-1]-a[i];
	}
	cout<<min;
}
