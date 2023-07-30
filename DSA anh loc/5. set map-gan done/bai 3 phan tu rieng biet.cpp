#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	
	for(long long i=0;i<n;i++){
		long long x;
		cin>>x;
		s.insert(x);
	}
	for(auto i:s) cout<<i<<" ";
}
