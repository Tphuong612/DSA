#include <bits/stdc++.h>
using namespace std;
int check(int a[], int n)
{
	for(int i=0;i<n-1;i++)
		{
			if(a[i+1]<=a[i]) return 0;
		}
	return 1;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int &i: a) cin>>i;
	if(check(a,n)) cout<<"YES";
	else cout<<"NO";
}
