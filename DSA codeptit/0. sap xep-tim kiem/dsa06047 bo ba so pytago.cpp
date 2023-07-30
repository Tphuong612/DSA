#include <bits/stdc++.h>
using namespace std;
void testcase(long long a[], long long n)
{
	bool check=false;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(binary_search(a+j+1, a+n, sqrt(a[i]*a[i]+a[j]*a[j]))) {
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
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a, a+n);
		testcase(a,n);
	}
}
