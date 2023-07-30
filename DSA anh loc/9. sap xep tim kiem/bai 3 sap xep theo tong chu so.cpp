#include <bits/stdc++.h>
using namespace std;
long long tong(long long a)
{
	string s=to_string(a);
	long long sum=0;
	for(int i=0;i<s.length();i++) sum+=s[i]-'0';
	return sum;
}
bool cmp(long long a, long long b)
{
	if(tong(a)==tong(b)) return a<b;
	return tong(a)<tong(b);
}
int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(long long &x: a) cin>>x;
	sort(a, a+n, cmp);
	for(long long x: a) cout<<x<<" ";
}
