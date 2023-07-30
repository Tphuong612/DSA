#include <bits/stdc++.h>
using namespace std;
int test1(long long n)// nguyen to
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return 0;
	return 1;
}
int test2(long long n)//thuan nghich
{
	string s=to_string(n);
	for(int i=0;i<s.size()/2;i++)
		if(s[i]!=s[s.size()-1-i]) return 0;
	return 1;
}
int test3(long long n)//scp
{
	long long k=(long long) sqrt(n);
	if(k*k==n) return 1;
	else return 0;
}
int test4(long long n)
{
	string s=to_string(n);
	int sum=0;
	for(int i=0;i<s.size();i++) sum+=s[i]-'0';
	if(test1(sum)) return 1;
	else return 0;
}
int main()
{
	int n;
	cin>>n;
	long long a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	int dem1=0, dem2=0, dem3=0, dem4=0;
	for(int i=0;i<n;i++)
		{
			if(test1(a[i])) dem1++;
			if(test2(a[i])) dem2++;
			if(test3(a[i])) dem3++;
			if(test4(a[i])) dem4++;
		}
	cout<<dem1<<endl<<dem2<<endl<<dem3<<endl<<dem4;
}
