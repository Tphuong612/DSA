// nC0+nC1+nC2+...+nCn=2^n;
#include <bits/stdc++.h>
using namespace std;
long long mod=123456789;
long long bipow(long long a, long b){
	if(b==0) return 1;
	long long x=bipow(a, b/2);
	if(b%2==0) return (x%mod*x%mod)%mod;
	else return (x%mod*x%mod*a%mod)%mod;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<bipow(2, n-1)%mod;
		cout<<endl;
	}
}
