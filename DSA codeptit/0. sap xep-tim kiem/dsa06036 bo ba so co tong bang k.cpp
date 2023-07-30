#include <bits/stdc++.h>
using namespace std;
void testcase(long long a[], long long n, long long k)
{
	bool check=false;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(binary_search(a+j+1, a+n, k-a[i]-a[j])) {
				check=true;
				cout<<"YES\n";
				return;
			}
	if(!check) cout<<"NO\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n, k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a, a+n);
		testcase(a,n,k);
	}
}
