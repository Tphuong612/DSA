#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		sort(a, a+n);
		long long dem=0;
		for(int i=0; i<n; i++){
			dem += lower_bound(a+i+1, a+n, a[i]+k) - (a+i) - 1;
		}
		cout<<dem<<endl;
	}
}
