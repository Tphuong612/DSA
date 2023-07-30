#include <bits/stdc++.h>
using namespace std;
int nt(long long n)// nguyen to
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return 0;
	return 1;
}
int check(int a[], int n, int k)
{
	long long s1=0, s2=0;
	for(int i=0;i<k-1;i++) s1+=a[i];

	for(int i=k;i<n;i++) s2+=a[i];
		if(nt(s1)&&nt(s2)) return 1;
		else return 0;
}
int main()
{
	int n,x;
	cin>>n;
	int a[n+5];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		if(check(a,n,i)) cout<<i-1<<" ";
	}
	
}
