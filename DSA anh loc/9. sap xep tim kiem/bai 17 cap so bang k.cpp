#include <bits/stdc++.h>
using namespace std;
int first(int a[], int l, int r, int x){
	int res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			r=m-1;
		}
		else if(a[m]<x){
			l=m+1;			
		}
		else r=m-1;
	}
	return res;
}
int last(int a[], int l, int r, int x){
	int res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			l=m+1;
		}
		else if(a[m]<x){
			l=m+1;			
		}
		else r=m-1;
	}
	return res;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	long long dem=0;
	for(int i=0;i<n;i++){
		int p1=first(a, i+1, n, k-a[i]);
		int p2=last(a, i+1, n, k-a[i]);
		if(p1!=-1&&p2!=-1) dem+=p2-p1+1;
	}
	cout<<dem;
}
