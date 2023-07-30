#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n, greater<long long>());
	long long s=0;
	for(int i=0;i<n;i++){
		s+=pow(2, i)*a[i];
	}
	cout<<s;
}
