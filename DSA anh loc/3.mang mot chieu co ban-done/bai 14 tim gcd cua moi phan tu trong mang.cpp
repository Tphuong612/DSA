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
	long long ucln=__gcd(a[0],a[1]);
	for(int i=2;i<n;i++)
		ucln=__gcd(ucln,a[i]);
	cout<<ucln;
}
