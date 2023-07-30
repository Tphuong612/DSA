#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	ll ans=1;// khoi tao missSum = 1;
	for(int i=0;i<n;i++){
		if(ans<a[i]) break;// gia tri min tinh den phan tu thu a[i] = chinh no
		else ans+=a[i];// gia tri max tinh den phan tu thu a[i] = prefixSum[i];
	}
	cout<<ans;
}
