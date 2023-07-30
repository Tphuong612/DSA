#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll max_cross(int a[], int l, int m, int h){
	ll sum=0, left_sum=INT_MIN, right_sum=INT_MIN;
	for(int i=m;i>=l;i--){
		sum+=a[i];
		if(sum>left_sum) left_sum=sum;
	}
	sum=0;
	for(int i=m+1;i<=h;i++){
		sum+=a[i];
		if(sum>right_sum) right_sum=sum;
	}
	return left_sum+right_sum;
}
ll maxarr(int a[], int l, int h){
	if(l==h) return a[l];
	int m=(l+h)/2;
	return max({maxarr(a, l, m), maxarr(a, m+1, h), max_cross(a, l, m, h)});
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<maxarr(a, 0, n-1);
}
