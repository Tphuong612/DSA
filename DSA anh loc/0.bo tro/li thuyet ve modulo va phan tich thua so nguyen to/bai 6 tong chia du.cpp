#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long m = 1000000007;

	long long s=0;
	for(int i=0;i<n;i++){
		long long x;
		cin>>x;
		s+=x;
		s%=m;
	}
	cout<<s;
}
