#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, x;
	cin>>n>>x;
	long long a[n];
	for(auto &x: a) cin>>x;
	sort(a, a+n);
	auto dem2=upper_bound(a, a+n, x)-lower_bound(a, a+n, x);
//	auto it=lower_bound(a, a+n, x)-a;
	long long dem1=0;
	long long l=0, r=n-1;
	while(l<r){
		if(a[l]+a[r]<=x){
			++dem1;
			l++;
			r--;
		}
		else{
			r--;
		}
	}
	cout<<dem1+dem2+(n-2*dem1-dem2);
}
