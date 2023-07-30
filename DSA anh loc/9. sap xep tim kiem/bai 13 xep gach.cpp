#include <bits/stdc++.h>// xep ganh
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int &x: a) cin>>x;
	sort(a, a+n);
	int i=0;
	while(i<n&&i<a[n-1])
		{
			i++;	
		}
	cout<<i;
}
