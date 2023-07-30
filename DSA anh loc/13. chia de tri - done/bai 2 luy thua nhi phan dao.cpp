#include <bits/stdc++.h>
using namespace std;
long long mod=1000000007;
long long bipow(long long a, long b){
	if(b==0) return 1;
	long long x=bipow(a, b/2);
	if(b%2==0) return (x%mod*x%mod)%mod;
	else return (x%mod*x%mod*a%mod)%mod;
}
int main()
{
	int n, m;
	cin>>n;
	string s=to_string(n);
	string k="";
	for(int i=s.length()-1;i>=0;i--) k+=s[i];
	m=stoll(k);
	cout<<bipow(n, m)%mod;
}
