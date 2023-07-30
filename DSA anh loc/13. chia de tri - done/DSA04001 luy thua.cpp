#include <bits/stdc++.h>
using namespace std;
long long m=1000000007;
long long bipow(long long a, long long b){
	if(b==0) return 1;
	long long x=bipow(a, b/2);
	if(b%2==0) return (x%m*x%m)%m;
	else return (x%m*x%m*a%m)%m;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n, k;
		cin>>n>>k;
		long long ans=bipow(n, k)%m;
		cout<<ans<<endl;
	}
}
