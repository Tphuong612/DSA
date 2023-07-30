#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n);
	cout<<a[n-1]<<" "<<a[n-2];
}
