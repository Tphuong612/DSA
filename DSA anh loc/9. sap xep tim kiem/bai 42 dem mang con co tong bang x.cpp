#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int n;
	ll x;
	cin>>n>>x;
	ll a[n], prsum[n];// mang cong don
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	prsum[0]=a[0];
	for(int i=1;i<n;i++){
		prsum[i]=prsum[i-1]+a[i];
	}
	ll dem=0;
	
	cout<<dem;
	
}
