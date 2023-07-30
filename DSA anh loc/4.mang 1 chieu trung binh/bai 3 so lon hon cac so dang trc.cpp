#include <bits/stdc++.h>
using namespace std;
int check(long long a[], int i)
{
	for(int j=i-1;j>=0;j--) 
		if(a[j]>=a[i]) return 0;
	return 1;
}
int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
		{
			if(check(a,i)) cout<<a[i]<<" ";
		}
}
