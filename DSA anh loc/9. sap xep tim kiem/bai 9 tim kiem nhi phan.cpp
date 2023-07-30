#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	int q;
	cin>>q;
	while(q--){
		long long x;
		cin>>x;
		if(binary_search(a, a+n, x)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
