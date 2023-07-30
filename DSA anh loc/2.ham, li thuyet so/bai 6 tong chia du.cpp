#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long a[n];
	
	for(int i=0;i<n;i++) cin>>a[i];
	long long m = (long long) 10e9+7;
	long long s=0;
	for(int i=0;i<n;i++){
		s+=a[i];
		s%=m;
	}
	cout<<s;
}
