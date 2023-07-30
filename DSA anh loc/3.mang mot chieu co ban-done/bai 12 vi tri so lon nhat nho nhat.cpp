#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int dem=0;
	long long a[n+5];
	long long b[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b, b+n);
	for(int i=n-1;i>=0;i--)// min
	{
		if(b[0]==a[i]){
			cout<<i<<" ";
			break;
		}
	}
	for(int i=0;i<n;i++)// max
	{
		if(b[n-1]==a[i]){
			cout<<i;
			break;
		}
	}
}
