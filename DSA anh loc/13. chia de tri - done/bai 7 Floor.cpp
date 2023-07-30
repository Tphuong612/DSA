#include <bits/stdc++.h>
using namespace std;
int search(int a[], int n, int k){
	int l=0, r=n-1, res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]<=k){
			res=a[m];
			l++;// tim tiep ben phai
		}
		else r=m-1;
	}
	return res;
}
int main()
{
	int n, k;
	cin>>n>>k;
	int a[n];
	for(auto &x: a) cin>>x;
	sort(a, a+n);
	if(search(a,n,k)!=-1)cout<<search(a, n, k);
	else cout<<-1;
}
